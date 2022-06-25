#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	for (y = 0; y < n && src[y] != '\0'; y++, x++)
		dest[x] = src[y];
	dest[x] = '\0';

	return (dest);
}
