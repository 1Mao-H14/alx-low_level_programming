#include "main.h"
/**
 * _strstr - Entry point
 *
 * @haystack: Input
 *
 * @needle: Input
 *
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *v = needle;

		while (*s == *v && *v != '\0')
		{
			s++;
			v++;
		}

		if (*v == '\0')
			return (haystack);
	}
}
