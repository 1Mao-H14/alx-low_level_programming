#include <stdio.h>
/**
 *main - function thats prints the name of the program plus a new line
 *@argc : integer input
 *@argv :array argument char input
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
