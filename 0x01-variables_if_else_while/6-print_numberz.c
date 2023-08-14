#include <stdio.h>
/**
  *main - Entry point
  * discription:'get the last digit of a number'
  * Return: always 0
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9 ; n++)
	{
		putchar (n + 48);
		n++;
	}
	putchar ('\n');
	return (0);
}
