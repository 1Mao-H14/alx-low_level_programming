#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - String there are digit
 * @str: sting Array
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int lent;

	lent = 0;

	while (lent < strlen(str))

	{
		if (!isdigit(str[lent]))
		{
			return (0);
		}

		lent++;
	}
	return (1);
}

/**
 * main - Print  Name OF THE Program
 * @argc: number of Aguments
 * @argv: array of Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int lent;
	int cvt_str_int;
	int value = 0;

	lent = 1;
	while (lent < argc)
	{
		if (check_num(argv[lent]))

		{
			cvt_str_int = atoi(argv[lent]);
			value += cvt_str_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		lent++;
	}

	printf("%d\n", value);

	return (0);
}
