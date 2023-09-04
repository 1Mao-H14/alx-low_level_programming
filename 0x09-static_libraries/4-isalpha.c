#include "main.h"

/**
 * _isalpha - CHecks for alphabetic CHaracter
 * @c: the CHaracter to be CHecked
 * Return: 1 if c is  LEtter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
