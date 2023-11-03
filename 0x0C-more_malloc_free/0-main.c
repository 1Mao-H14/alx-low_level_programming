#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - Allocates memory and checks for success
 * @size: The size (in bytes) of the memory block to allocate
 *
 * Return: A pointer to the allocated memory block on success
 *         Exits with an error message on failure
 */

void *malloc_checked(size_t size)
{
void *ptr = malloc(size);
if (ptr == NULL)
{
fprintf(stderr, "Memory allocation failed\n");
exit(EXIT_FAILURE);
}
return (ptr);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *c;
int *i;
float *f;
double *d;

c = malloc_checked(sizeof(char) * 1024);
printf("%p\n", (void *)c);
i = malloc_checked(sizeof(int) * 402);
printf("%p\n", (void *)i);
f = malloc_checked(sizeof(float) * 100000000);
printf("%p\n", (void *)f);
d = malloc_checked(INT_MAX);
printf("%p\n", (void *)d);
free(c);
free(i);
free(f);
free(d);
return (0);
}
