#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int kawntar = 0;
	int c;

	while (s[kawntar] != '\0')
	kawntar++;
	for (c = 0; c < kawntar; c++)
	{
		kawntar--;
		rev = s[c];
		s[c] = s[kawntar];
		s[kawntar] = rev;
	}
}
