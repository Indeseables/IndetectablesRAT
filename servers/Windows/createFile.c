#include <stdio.h>

int createFile(char *fileContent, char *fName)
{
    FILE *newFile;
    newFile = fopen(fName, "wb");

    if (newFile == NULL){
        return -1;
    }

    fputs(fileContent, newFile);

    if(fclose(newFile) != 0){
        return -1;
    }
}

