#include "main.h"

/**
 * get_endianness - a Function CHECKS endianness system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int value = 1;
	char *byte_representation = (char *)&value;

	return (*byte_representation);
}
