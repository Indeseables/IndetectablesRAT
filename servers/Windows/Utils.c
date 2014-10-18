#include <stdio.h>
#include <stdlib.h>

char *strtolower(char *str)
{
    unsigned int i;
	for (i = 0; i < strlen(str); i++) {
		str[i] = (char)((str[i] >= 'A' && str[i] <= 'Z') ? str[i] + 32: str[i]);
	}

	return str;
}
