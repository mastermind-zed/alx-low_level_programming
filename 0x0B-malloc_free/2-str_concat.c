#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings.
 *@s1: first string.
 *@s2: second string.
 *Return: pointer to string.
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	int x = 0, y = 0, z = 0;

	if (s1 != NULL)
		for (; s1[x]; x++)
		;
	if (s2 != NULL)
		for (; s2[y]; y++)
		;

	s = malloc(sizeof(char) * (x + y + 1));
	if (s == NULL)
		return (NULL);

	while (z < x)
	{
		s[z] = s1[z];
		z++;
	}

	while (z < x + y)
	{
		s[z] = s2[z - x];
		z++;
	}
	s[z] = '\0';
	return (s);
}
