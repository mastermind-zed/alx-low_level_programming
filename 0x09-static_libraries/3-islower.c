#include "main.h"
/**
 * _islower - Returns 1 if c is lowercase otherwise 0
 * @c: contains value to be compared
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
	return (1);
	}

	else
	{
	return (0);
	}
}
