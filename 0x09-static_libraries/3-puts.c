#include "main.h"
/**
 * _puts - Prints  string, Followed By a new line, TO stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
