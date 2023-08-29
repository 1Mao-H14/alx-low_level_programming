#include "main.h"
/**
 * print_chessboard - Entry point
 *
 * @a: array
 *
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int b;
	int x;

	for (b = 0; b < 8; b++)
	{
		for (x = 0; x < 8; x++)
_putchar(a[b][x]);	
		_putchar('\n');
	}
}
