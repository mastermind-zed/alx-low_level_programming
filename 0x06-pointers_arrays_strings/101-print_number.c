#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: Always 0.
 */

void print_number(int n)
{
	unsigned int x = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar(48);
	else
	{
		while ((n / x) >= 10)
			x *= 10;
		while (x > 0)
		{
			_putchar((n / x) + 48);
			n %= x;
			x /= 10;
		}
	}
}
