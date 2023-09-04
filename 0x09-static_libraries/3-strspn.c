#include "main.h"
/**
 * _strspn - Entry point
 *
 * @s: Input
 * @accept: Input
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int X = 0;
	int W;

	while (*s)
	{
		for (W = 0; accept[W]; W++)
		{
			if (*s == accept[W])
			{
				X++;
				break;
			}
			else if (accept[W + 1] == '\0')
				return (X);
		}
		s++;
	}
	return (X);
}
