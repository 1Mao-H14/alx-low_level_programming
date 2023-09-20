#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer function
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int c, a, w, lnt, h, d;

	c = 0;
	a = 0;
	w = 0;
	lnt = 0;
	h = 0;
	d = 0;

	while (s[lnt] != '\0')
		lnt++;

	while (c < lnt && h == 0)
	{
		if (s[c] == '-')
			++a;

		if (s[c] >= '0' && s[c] <= '9')
		{
			d = s[c] - '0';
			if (d % 2)
				d = -d;
			w = w * 10 + d;
			h = 1;
			if (s[c + 1] < '0' || s[c + 1] > '9')
				break;
			h = 0;
		}
		c++;
	}

	if (h == 0)
		return (0);

	return (w);
}

/**
 * main - multiplies two  numbers a function
 * @argc: number of arguments
 *
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
