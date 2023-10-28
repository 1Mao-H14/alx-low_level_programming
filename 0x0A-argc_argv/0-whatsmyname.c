#include <stdio.h>
/**
 * main - a function that prints its name, followed by a new line.
 * @argc : number of command line arguments
 * @argv : pointer array thats contains the command line arguments
 * Return: return (0) succes
 *
 **/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
