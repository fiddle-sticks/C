// client socket program

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>  // look 
#include<arpa/inet.h>   // these
#include<unistd.h>      // up

// create a socker to connect to the server

short socketCreate(void) {
    short hSocket;
    printf("Create the socket\n");
    hSocket = socket(AF_INET, SOCK_STREAM,0);
    return hSocket;
}

//try to connect to the server

int socketConnect(int hSocket){
    int iRetval = -1;
    int ServerPort = 12346;

    struct sockaddr_in remote = {0};
    remote.sin_addr.s_addr = inet_addr("127.0.0.1"); // local host
    remote.sin_family = AF_INET;
    remote.sin_port = htons(ServerPort);

    iRetval = connect(hSocket,(struct sockaddr *)&remote,sizeof(struct sockaddr_in));
    return iRetval;
}

int SocketSend(int hSocket, char* Rqst,short lenRqst) {
    int shortRetval = -1;
    struct timeval tv;
    tv.tv_sec = 20; // 20 seconds until timeout
    tv.tv_usec = 0;

    if(setsockopt(hSocket,SOL_SOCKET,SO_SNDTIMEO,(char *)&tv, sizeof(tv)) < 0){
        printf("Time out....\n");
        return -1;
    }

    shortRetval = send(hSocket,Rqst,lenRqst,0);
    return shortRetval;

}

// main program

int main(int argc, char *argv[]) {
    int hSocket = 0;

    char sendToServer[100]= {0};

    //create the socket

    hSocket = socketCreate();

    if(hSocket == -1) {
        printf("Could not create the socket\n");
        return 1;
    }

    printf("Socket Created\n");

    //connect to server

    if (socketConnect(hSocket) < 0){
        perror("connect failed.\n");
        return 1;
    }

    printf("Successfully connected with the server\n");
    printf("Enter the message: ");
    fgets(sendToServer,100,stdin);

    //send data to the server
    SocketSend(hSocket, sendToServer, strlen(sendToServer));

    close (hSocket);

    return 0;
}