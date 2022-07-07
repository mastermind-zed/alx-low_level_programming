#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of all types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list any;
	unsigned int x;
	char *y, *separator;

	va_start(any, format);

	separator = "";

	x = 0;
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%s%c", separator, va_arg(any, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(any, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(any, double));
				break;
			case 's':
				y = va_arg(any, char *);
				if (y == NULL)
					y = "(nil)";
				printf("%s%s", separator, y);
				break;
			default:
				x++;
				continue;
		}
		separator = ", ";
		x++;
	}

	printf("\n");
	va_end(any);
}
