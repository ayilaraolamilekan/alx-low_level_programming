#include "main.h"
/**
 * _puts - Check if a number is greater than 0
 * @str: The number to be checked
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
