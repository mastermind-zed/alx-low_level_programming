#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: less than, equal to or greater than zero.
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int comp = 0;

	while (s1[x] != '\0' && s2[x] != '\0' && comp == 0)
	{
		comp = s1[x] - s2[x];
		x++;
	}
	return (comp);
}
