#include <stdio.h>
#include "main.h"
/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argc : number of arguments inputed argument
 * @argv : array of string inputed  into programme
 * Return: Always 0 (success)
 */

int main(int argc, char*argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
