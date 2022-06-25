#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src to buffer
 * @dest: the buffer
 * @src: the string pointer
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}
	for (x = 0; x <= length; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
