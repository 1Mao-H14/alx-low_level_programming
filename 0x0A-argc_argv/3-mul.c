#include<stdio.h>
#include <stdlib.h>
/**
 *main - a function thats that multiplies two number.
 *@argv : array pointer basicaly argument (number) been inputed
 *@argc : an array of pointers thats point into strings
 *Return: 0 on success, 1 on error.
 **/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int_1 = atoi(argv[1]);
		int_2 = atoi(argv[2]);
		resulte = int_1 * int_2
		printf("%d\n", resulte);
		return (0);
	}
}
