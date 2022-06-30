#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Entry point
 * @s1: Destination string
 * @s2: String to be merged with
 * @n: Number of bytes
 * Return: Pointer to first index of the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	if (b <= n)
		n = b;

	ptr = malloc((a + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (c = 0; s1[c] != '\0'; c++)
		ptr[c] = s1[c];

	for (c = 0; c < n; c++)
		ptr[c + a] = s2[c];

	ptr[c + a] = '\0';

	return (ptr);
}
