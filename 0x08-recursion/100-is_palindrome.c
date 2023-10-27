#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - make sure string is a PAlindromE
 *
 * @s: INPUT string
 *
 * Return:  returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - A FUNCTION THATS length of a string
 *
 * @s: INPUT THE String to calculate length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - cherchein string for the characters  for palindrome
 * @s:INPUT string
 * @i: iterator
 * @len: Calculate length of the string
 *
 * Return: if palindrome 1,if not 0
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

