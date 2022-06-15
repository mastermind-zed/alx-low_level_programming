#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13
 * @c: string to be utilised
 * Return: encoded string.
 */

char *rot13(char *c)
{
	int a = 0;
	int b = 0;
	char c_alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c_rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; c_alph[b] != '\0'; b++)
		{
			if (c[a] == c_alph[b])
			{
				c[a] = c_rot13[b];
				break;
			}
		}
	}

	return (c);
}
