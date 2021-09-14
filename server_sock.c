// client socket program

#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>

// create the SOCKET

short socketCreate(void)    {
    short hSocket = 0;
    printf("Creating the Socket\n");
    hSocket = socket(AF_INET, SOCK_STREAM,0);
    return hSocket;
}

// BIND
int bindCreatedSocket(int hSocket)  {
    int iRetval = -1;
    int clientPort = 12346;   // set the port number

    struct sockaddr_in remote = {0};

    // internet address family

    remote.sin_family = AF_INET;

    // any incoming interface

    remote.sin_addr.s_addr = htonl(INADDR_ANY); //no clue what this is saying

    remote.sin_port = htons(clientPort);     // match up to local port

    iRetval = bind(hSocket,(struct sockaddr *)&remote, sizeof(remote));
    
    return iRetval;
}

int main(int argc, char *argv[]){
    int socket_desc = 0, sock = 0, clientLen = 0;
    struct sockaddr_in  client;
    char client_message[200]= {0};
    char message[100] = {0};
    const char *pMessage = "jimbo";

    //Create the SOCKET
    socket_desc = socketCreate();
    if (socket_desc == -1) {
        printf("No Bueno on Socket Creation\n");
        return 1;
    }

    printf("Socket Created....welcome to my DOJO\n");

    //BIND

    if(bindCreatedSocket(socket_desc) < 0) {
        //print error message
        perror("bind failed\n");  //posix error function, neat
        return 1;  // print error message on screen
    }

    printf("bind completed\n");

    //LISTEN

    listen(socket_desc, 3); // 3 max connections

    //accept incoming connections

    while(1) {
        printf("Waiting patiently for incoming connections...\n");
        clientLen = sizeof(struct sockaddr_in);

        //accept connection from incoming client

        sock = accept(socket_desc,(struct sockaddr *)&client,(socklen_t*)&clientLen);

        // check to see if success

        if (sock < 0){
            perror("Accept Failed\n");
            return 1;
        }
    
        printf("Connection accepted!\n");

        memset(client_message,'\0',sizeof client_message);
        memset(message,'\0', sizeof message);

        //receive a reply from the client
        if (recv(sock,client_message,200,0) < 0) {
            printf("recv failed\n");
            break;
        }
    
    
        printf("Client reply : %s\n",client_message);

        if(strcmp(pMessage, client_message) == 0) {
            strcpy(message, "Access Granted .\n");
        }
        else {
            strcpy(message,"Access Denied\n");
        }
    
        //SEND SOME DATA TO CLIENT

        if (send(sock,message,strlen(message),0) < 0 ){
            printf("send failed\n");
            return 1;
        }
    
        close(sock);
        sleep(1);
        
    } //close the while loop

    return 0;
}