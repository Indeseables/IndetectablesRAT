#include <windows.h>
#include "Install.h"
#include "Information.h"

void InstallServer()
{
    char install_path[MAX_PATH];
    snprintf(install_path, sizeof(install_path), "%s\\%s", SERVER_INSTALL_PATH, SERVER_INSTALL_NAME);
}
