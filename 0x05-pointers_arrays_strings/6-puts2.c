#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int L = 0;
	int H = 0;
	char Z = str;
	int i;

	while (*Z != '\0')
	{
		Z++;
		L++;
	}
	H = L - 1;
	for (i = 0 ; i <= H ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
