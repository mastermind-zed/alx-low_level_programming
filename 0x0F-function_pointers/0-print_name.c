#include "function_pointers.h"
/**
 * print_name - Entry point
 * @name: name to print
 * @f: funtion that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);

}
