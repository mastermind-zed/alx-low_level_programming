#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @c: string to use
 * Return: string
 */
char *cap_string(char *c)
{
	int x, y, probe;
char i[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};

	if (c[0] >= 97 && c[0] <= 122)
		c[0] = c[0] - 32;
	while (c[x] != '\0')
	{
		if (c[x] >= 97 && c[x] <= 122)
		{
			y = 0;
			probe = 0;
			while (probe == 0 && y < 13)
			{
				if (c[x - 1] == i[y])
				{
					probe = 1;
				}
				y++;
			}
			if (probe == 1)
			{
				c[x] = c[x] - 32;
			}
		}
		x++;
	}
	return (c);
}
