#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: Input value
 *
 * @src: Input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int h;
	int x;

	h = 0;
	while (dest[h] != '\0')
	{
		h++;
	}
	x = 0;
	while (src[x] != '\0')
	{
		dest[h] = src[x];
		h++;
		x++;
	}

	dest[h] = '\0';
	return (dest);
}
