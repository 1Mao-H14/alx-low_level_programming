#include <stdio.h>
/**
 *main - a function thats print the number of arguments passed on it
 *@argc : number of arguments passed in it
 *@argv : array of pointers for argument passed
 *Return: return (0) succes
 **/
int main(int argc, char *argv[])
{
int i;

for (i = 0 ; argc > i; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
