#include "main.h"

/**
 * _pow_recursion - Entry point
 * @a: Original value
 * @b: Power value
 * Return: Always 0.
 */

int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	else if (b == 0)
		return (1);
	else if (b ==1)
		return (a);

	b--;
	return (a * _pow_recursion(a, b));
}
