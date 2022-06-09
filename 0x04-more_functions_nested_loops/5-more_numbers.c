#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14.
 * Return: Always 0
 */

void more_numbers (void)
{
	int i, x;
	for (i = 0; i < 10; i++)
	{
		for (x = 0; x <=10; i++)
		{
			if (x >= 10)
				_putchar((x / 10) + 48);
			_putchar((x % 10) + 48)
		}
		_putchar('\n')
		}
}
