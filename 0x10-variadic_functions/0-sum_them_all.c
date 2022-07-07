#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: unsigned integer
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list alist;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(alist, n);

	for (x = 0; x < n; x++)
		sum += va_arg(alist, int);
	va_end(alist);
	return (sum);
}
