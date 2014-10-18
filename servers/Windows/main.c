#include <stdio.h>
#include <stdlib.h>
#include "Information.h"
#include "Install.h"

int main()
{
    printf("# Starting server\n");
    printf("# Installing server\n");
    InstallServer();
    printf("# Starting information gathering\n");
    GatherInformation();
    return 0;
}
