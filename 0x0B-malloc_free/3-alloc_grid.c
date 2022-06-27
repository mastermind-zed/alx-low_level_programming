#include "main.h"
#include <stdlib.h>

/**
  * **alloc_grid - pointer 2 dimensional array
  * @width: width
  * @height: height
  * Return: pointer.
  */

int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	if (width <= 0 || height <= 0)
		return ('\0');
	s = (int **)malloc(height * sizeof(int *));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = (int *)malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (; i >= 0; i--)
			{
			free(s[i]);
			}
			free(s);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
