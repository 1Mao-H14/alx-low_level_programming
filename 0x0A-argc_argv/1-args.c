#include <stdio.h>
/**
 *main - a function thats print the number of arguments passed on it
 *@argc : number of arguments passed in it
 *@argv : array of pointers for argument passed
 *Return: return (0) succes
 **/
int main(int argc, char **argv __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);


}
