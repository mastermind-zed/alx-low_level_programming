#include "main.h"

/**
 * _print_rev_recursion -Entry point
 * @s: input
 * Return: Always 0 (Success)
 */

void _print_rev_recurion(char *s)
{
	if (*s != '\0')
		_print_rev_recurion(s + 1);
	else
		return;
	_putchar(*s);
}
