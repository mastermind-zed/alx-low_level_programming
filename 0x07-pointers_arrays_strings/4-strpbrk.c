#include "main.h"

/**
* *_strpbrk - locates first occurance in a string
* @s: the string pointed to
* @accept: the character to found
*
* Return: pointer to dest.
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (accept[j] == s[i])
				return (s + i);
	}

	return (0);
}
