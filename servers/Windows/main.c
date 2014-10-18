#include <stdio.h>
#include <stdlib.h>
#include "Information.h"
#include "Install.h"

int main()
{
    printf("%s", SERVER_INSTALL_PATH);
    printf("# Starting server\n");
    printf("# Installing server\n");
    InstallServer();
    printf("# Starting information gathering\n");
    GatherInformation();
    return 0;
}
