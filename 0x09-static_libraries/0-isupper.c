#include "main.h"

/**
 * _isupper - Returns 1 if c is uppercase otherwise 0
 * @c: contains value to be compared
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}

	else
	{
	return (0);
	}
}
