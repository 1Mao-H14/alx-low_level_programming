#include <stdio.h>
/**
  *main - Entry point
  * discription:'get the last digit of a number'
  * Return: always 0
  */
int main(void)
{
	int n = 97;
	int N = 65;

	while (N <= 122)
	{
		putchar (n);
		n++;
	}

	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar ('\n');
	return (0);
}
