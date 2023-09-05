#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: Input
 * @needle: Input
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *s = needle;

		while (*x == *s && *s != '\0')
		{
			x++;
			s++;
		}

		if (*s == '\0')
			return (haystack);
	}

	return (0);
}
