#include "main.h"
/**
 * leet - encode into 1337speak
 *
 * @m: input value
 *
 * Return: m value
 */
char *leet(char *m)
{
	int c, a;
	char s3[] = "aAeEoOtTlL";
	char s4[] = "4433007711";

	for (c = 0; m[c] != '\0'; c++)
	{
		for (a = 0; a < 10; a++)
		{
			if (m[c] == s3[a])
			{
				m[c] = s4[a];
			}
		}
	}
	return (m);
}

