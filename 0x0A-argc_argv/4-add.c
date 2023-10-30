#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - a function thats adds positive numbers.
 *@argv : array pointer basicaly argument (number) been inputed
 *@argc : an array of pointers thats point into strings
 *Return: 0 on success, 1 on error.
 **/
int main(int argc, char *argv[])
{
int sum = 0;

if (argc == 1)
{
printf("0\n");
}
else
{
int i;

for (i = 1; i < argc; i++)
{
int num = 0;
int j = 0;

while (argv[i][j])
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);

}
num = num * 10 + (argv[i][j] - '0');
j++;
}
sum += num;
}
printf("%d\n", sum);

}

return (0);
}
