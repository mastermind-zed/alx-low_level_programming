#include "main.h"

/**
 * get_endianness - Entry point
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int a;
	char *c;

	a = 1;
	c = (char *) &a;

	return ((int)*c);
}
