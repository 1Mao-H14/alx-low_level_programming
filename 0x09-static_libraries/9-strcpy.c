#include "main.h"

/**
 * char *_strcpy - Function that Copies the String Pointed to by src
 *
 * @dest: copy to
 *
 * @src: copy from
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int s = 0;
	int q = 0;

	while (*(src + s) != '\0')
	{
		s++;
	}
	for ( ; q < s ; q++)
	{
		dest[q] = src[q];
	}
	dest[s] = '\0';
	return (dest);
}
