#include "main.h"

/**
 * *leet - writes a function that encodes a string to 1337
 * @c: string to encode
 * Return: encoded string
 */

char *leet(char *c)
{
	int a = 0;
	int b = 0;
	char c_low[] = {'a', 'e', 'l', 'o', 't'};
	char c_up[] = {'A', 'E', 'L', 'O', 'T'};
	char c_num[] = {'4', '3', '1', '0', '7'};

	while (c[a] != '\0')
	{
		for (b = 0; b < 5; b++)
		{
			if (c[a] == c_low[b] || c[a] == c_up[b])
				c[a] = c_num[b];
		}
		a++;
	}

	return (c);
}
