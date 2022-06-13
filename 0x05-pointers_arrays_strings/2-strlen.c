#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: string being counted
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i;
	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
