#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_char - prints a characer
 *@ap: list of arguements passed into the main function
 * Return: The passed argument
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_integer - prints an integer
 *@ap: list of arguements passed into the main function
 * Return: The passed argument
 */

void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints a float
 *@ap: list of arguements passed into the main function
 * Return: The passed argument
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_s - prints a string
 *@ap: list of arguements passed into the main function
 * Return: The passed argument
 */

void print_s(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	if (s  == NULL)
		s = ("(nil)");
	printf("%s", s);
}
/**
 * print_all - Prints anything
 *@format: list of arguments that can be passed through the function
 * Return: The passed argument
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, k;
	va_list ap;

	print_t list[] = {
		{"c",  print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_s},
		{NULL, NULL},
	};

	va_start(ap, format);
	i = 0;
	while ((format != NULL) && (format[i] != '\0'))
	{
		k = 0;
		while (list[k].name != NULL)
		{
			if (*(list[k].name) == format[i])
			{
				printf("%s", separator);
				list[k].type(ap);
				separator = ", ";
			}
			k++;
		}
		i++;
		k = 0;
	}
	printf("\n");
	va_end(ap);
}
