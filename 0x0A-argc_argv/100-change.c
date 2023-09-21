#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints AND SHOW ME THE minimum number Coins
 *
 * make change for an amount of money
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int digit, w, value;
	int money[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	digit = atoi(argv[1]);
	value = 0;

	if (digit < 0)
	{
		printf("0\n");
		return (0);
	}

	for (w = 0; w < 5 && digit >= 0; w++)
	{
		while (digit >= money[w])
		{
			value++;
			digit -= money[w];
		}
	}

	printf("%d\n", value);
	return (0);
}
