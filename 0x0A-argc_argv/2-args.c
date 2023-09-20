#include <stdio.h>
#include "main.h"
/**
 * main - a function that print all arguments it receives.
 * @argc : input who gives the number of arguments
 * @argv : input who gives the strings  of an argument
 * Return : Always 0 (succes)
 * */
char main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ;i++)
	printf("%s/n",argv[i]);
}
