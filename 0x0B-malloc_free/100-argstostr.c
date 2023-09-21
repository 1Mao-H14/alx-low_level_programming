#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry function that concatenate.
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)

{
	int v, s, y = 0, x = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (v = 0; v < ac; v++)
	{
		for (s = 0; av[v][s]; s++)
			x++;
	}
	x += ac;
	str = malloc(sizeof(char) * x + 1);
	if (str == NULL)
		return (NULL);
	for (v = 0; v < ac; v++)
	{
	for (s = 0; av[v][s]; s++)
	{
		str[y] = av[v][s];
		y++;
	}
	if (str[y] == '\0')
	{
		str[y++] = '\n';
	}
	}
	return (str);
}
