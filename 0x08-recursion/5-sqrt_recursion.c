#include "main.h"

/**
 * isqrt - Evaluate from 1 to n
 * @x: input integer
 * @y: iterated integer
 * Return: square root or -1
 */
int isqrt(int x, int y)
{
	if ((y * y) == x)
		return (y);
	else if ((y * y) > x)
		return (-1);
	return (isqrt(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (isqrt(n, 0));
}
