#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *w;
	unsigned int v = 0, x = 0, tall1 = 0, tall2 = 0;

	while (s1 && s1[tall1])
		tall1++;
	while (s2 && s2[tall2])
		tall2++;

	if (n < tall2)
		w = malloc(sizeof(char) * (tall1 + n + 1));
	else
		w = malloc(sizeof(char) * (tall1 + tall2 + 1));

	if (!w)
		return (NULL);

	while (v < tall1)
	{
		w[v] = s1[v];
		v++;
	}

	while (n < tall2 && v < (tall1 + n))
		w[v++] = s2[x++];

	while (n >= tall2 && v < (tall1 + tall2))
		w[v++] = s2[x++];

	w[v] = '\0';

	return (w);
}
