#include <windows.h>

struct COMPUTER
{
    char NAME, RAM, ARCHITECURE;
} info_comp;

struct OS
{
    char CAPTION, BUILD_NUMBER, MINOR_VERSION, MAJOR_VERSION;
} info_os;

struct USER
{
    char NAME, COUNTRY;
    BOOL IS_ADMIN;
} info_user;

void GatherInformation();
