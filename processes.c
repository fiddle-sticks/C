#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
    int mypid, myppid;
    printf("Program to find and print PID and PPID\n");
    mypid = getpid();
    //myppid = getppid();
    printf("My Process ID is %d\n, mypid");
    //printf("My Parent process ID is %d\n", myppid);

    printf("Cross Verification of pids by executing process commands on shell\n");
    system("ps-ef");
    return 0;

}