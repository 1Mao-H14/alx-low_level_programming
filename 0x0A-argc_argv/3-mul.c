#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int v, x, w, high, l, flo;

	v = 0;
	x = 0;
	w = 0;
	high = 0;
	l = 0;
	flo = 0;

	while (s[high] != '\0')
		high++;

	while (v < high && l == 0)
	{
		if (s[v] == '-')
			++x;

		if (s[v] >= '0' && s[v] <= '9')
		{
			flo = s[v] - '0';
			if (x % 2)
				flo = -flo;
			w = w * 10 + flo;

			l = 1;
			if (s[v + 1] < '0' || s[v + 1] > '9')
				break;
			l = 0;
		}
		v++;
	}

	if (l == 0)
		return (0);

	return (w);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int value, first_num, second_num;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	first_num = _atoi(argv[1]);
	second_num = _atoi(argv[2]);
	value = first_num * second_num;

	printf("%d\n", value);

	return (0);
}

