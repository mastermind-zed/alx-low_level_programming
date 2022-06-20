#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer variable
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
