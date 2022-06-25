#include "main.h"
/**
 * _isdigit - Returns 1 if it is a digit between 0 and 9 and 0 otherwise
 * @c: contains value to be compared
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
