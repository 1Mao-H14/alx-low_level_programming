#include "main.h"

/**
 * _atoi - Convert a String into integer.
 *
 * @s: the string to use.
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int c = 1, i = 0;
	unsigned int h = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			c *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		h = (h * 10) + (s[i] - '0');
		i++;
	}
	h *= c;
	return (h);
}
