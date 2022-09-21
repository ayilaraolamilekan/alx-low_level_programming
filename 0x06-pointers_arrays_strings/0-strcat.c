#include "main.h"
/*
 *funcctions appends the src string to the dest string:
 **/
char *_strcat(char *dest, char *src);
{
	char destination[] = "Hello ";
	char source[] = "World!";
		strcat(destination, source);
		printf("Concatenated String: %s\n", destination);
		return (0);
}
