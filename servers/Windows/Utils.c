#include <stdio.h>
#include <stdlib.h>

char _tolower(char c)
{
	return ((c >= 'A' && c <= 'Z') ? c + 32: c);
}

char *strtolower(char *str)
{
    unsigned int i;
	for (i = 0; i < strlen(str); i++) {
		//str[i] = (char)_tolower(str[i]);
		str[i] = (char)((str[i] >= 'A' && str[i] <= 'Z') ? str[i] + 32: str[i]);
	}

	return str;
}
