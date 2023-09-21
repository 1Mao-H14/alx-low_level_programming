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
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (v = 0; v < ac; v++)
	{
		for (w = 0; av[v][w]; w++)
			q++;
	}
	q += ac;

	string = malloc(sizeof(char) * q + 1);
	if (string == NULL)
		return (NULL);
	for (v = 0; v < ac; v++)
	{
	for (q = 0; av[v][w]; w++)
	{
		string[a] = av[v][w];
		a++;
	}
	if (string[a] == '\0')
	{
		string[a++] = '\n';
	}
	}
	return (string);
}
