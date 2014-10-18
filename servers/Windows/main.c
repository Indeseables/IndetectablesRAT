#include <stdio.h>
#include <stdlib.h>
#include "Information.h"
#include "Install.h"

int main()
{
    Sleep(2000);
    printf("# Starting server\n");
    #ifdef SERVER_INSTALL
    printf("# Installing server\n");
    #endif // SERVER_INSTALL
    InstallServer();
    printf("# Starting information gathering\n");
    GatherInformation();
    return 0;
}
