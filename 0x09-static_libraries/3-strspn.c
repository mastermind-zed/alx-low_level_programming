#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, len;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		len = 1;
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
			{
				len = 0;
				break;
			}
		}
		if (len == 1)
			break;
	}
	return (x);
}
