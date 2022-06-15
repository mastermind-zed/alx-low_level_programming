#include "main.h"

/**
 * _strncat - Concatenates two strings using @ bytes
 * @dest: Destination String; src string is appended to it
 * @src: Source string; gets appended to dest string
 * @n: Number of bytes of src that should be concatenated with dest
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && n != b)
	{
		*(dest + a) = src[b];
		b++;
		a++;
	}

	*(dest + a) = '\0';

	return (dest);
}
