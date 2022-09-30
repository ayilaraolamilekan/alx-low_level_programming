#include "main.h"
/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *s)
{
	int i;
		for (i = 0; *s != '\0'; i++)
		{
			_putchar(*s);
			s++;
		}
		_putchar('\n');	
}
