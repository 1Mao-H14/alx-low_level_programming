#include "main.h"
/**
 * _puts_recursion - same function as puts
 *
 * @s: argument input
 *
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

