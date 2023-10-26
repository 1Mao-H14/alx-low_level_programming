#include "main.h"
/**
 * _strlen_recursion - Returns and show LEngth of STring.
 * @s: The string to be measured.
 *
 * Return: shows me Length String.
 */
int _strlen_recursion(char *s)
{
	int L = 0;

	if (*s)
	{
		L++;
		L += _strlen_recursion(s + 1);
	}

	return (L);
}
