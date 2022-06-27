#include "main.h"
#include <stdlib.h>

/**
 * c_free_grid - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
 */

void c_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */

char **strtow(char *str)
{
	char **s;
	unsigned int i, height, x, y, z;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = height = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			height++;
	s = malloc((height + 1) * sizeof(char *));
	if (s == NULL || height == 0)
	{
		free(s);
		return (NULL);
	}
	for (x = z = 0; x < height; x++)
	{
		for (i = z; str[i] != '\0'; i++)
		{
			if (str[i] == ' ')
				z++;
			if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			{
				s[x] = malloc((i - z + 2) * sizeof(char));
				if (s[x] == NULL)
				{
					c_free_grid(s, x);
					return (NULL);
				}
				break;
			}
		}
		for (y = 0; z <= i; z++, y++)
			s[x][y] = str[z];
		s[x][y] = '\0';
	}
	s[x] = NULL;
	return (s);
}
