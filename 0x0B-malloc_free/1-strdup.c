#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)

{

	char *str_2;
	int a, c = 0;

	if (str == NULL)
	return (NULL);

	a = 0;

	while (str[a] != '\0')

	a++;

	str_2 = malloc(sizeof(char) * (a + 1));



	if (str_2 == NULL)

	return (NULL);



	for (c = 0; str[c]; c++)

	str_2[c] = str[c];

	return (str_2);

}
