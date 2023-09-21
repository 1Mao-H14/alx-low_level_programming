#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)

{
	int v, w, a = 0, q = 0;
	char *kkk;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (v = 0; v < ac; v++)
	{
		for (w = 0; av[v][w]; w++)
			q++;
	}
	q += ac;

	kkk = malloc(sizeof(char) * q + 1);
	if (kkk == NULL)
		return (NULL);
	for (v = 0; v < ac; v++)
	{
	for (n = 0; av[v][w]; w++)
	{
		kkk[a] = av[v][w];
		a++;
	}
	if (kkk[a] == '\0')
	{
		kkk[a++] = '\n';
	}
	}
	return (kkk);
}
