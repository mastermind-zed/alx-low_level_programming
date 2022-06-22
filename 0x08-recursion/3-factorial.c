#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a number'
 * @n: integer being tested
 * Return: the factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}
}
