#include "main.h"
#include <string.h>
/**
 * print_rev - Entry function
 * @s: pointer to char
 * Return: 0
 */
void print_rev(char *s)

{
	char rev[1000];
	int i, j;
	int length = strlen(s);
	j = length - 1;
	for (i = 0; i < length; ++i)
{
	rev[i] = s[j];
	j--;
	_putchar(rev[i]);
}
	_putchar('\n');
}
