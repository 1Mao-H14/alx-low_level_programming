#include <stdio.h>
#include <stdlib.h>

/**
 *main - a functioprints the minimum number of coins change foramount of money
 *@argv : array pointer basicaly argument (number) been inputed
 *@argc : an array of pointers thats point into strings
 *Return: 0 on success, 1 on error.
 **/

int main(int argc, char *argv[])
{
int cents;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
}
else
{
int coins25 = cents / 25;
int remainder25 = cents % 25;
int coins10 = remainder25 / 10;
int remainder10 = remainder25 % 10;
int coins5 = remainder10 / 5;
int remainder5 = remainder10 % 5;
int coins2 = remainder5 / 2;
int coins1 = remainder5 % 2;
int totalCoins = coins25 + coins10 + coins5 + coins2 + coins1;
printf("%d\n", totalCoins);
}

return (0);
}
