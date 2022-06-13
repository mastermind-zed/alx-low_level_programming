#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 */

void puts_half(char *str)
{
	int length, n, x;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	n = (length - 1) / 2;
	for (x = n + 1; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
