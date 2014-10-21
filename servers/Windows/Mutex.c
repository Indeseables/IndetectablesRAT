#include <stdio.h>
#include <stdlib.h>

#include "Mutex.h"
#include "Information.h"

BOOL Mutex()
{
    HANDLE hMutex = CreateMutex(NULL, TRUE, SERVER_MUTEX);
    return (hMutex == NULL);
}
