#include "main.h"
#include <stdlib.h>

/**
  * *_strdup - pointer to allocated space in memory
  * @str: string
  * Return: pointer.
  */

char *_strdup(char *str)
{
	char *s;
	int i = 0, size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + i) != '\0')
	{
		i++;
		size++;
	}
	s = (char *)malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size + 1); i++)
	{
	*(s + i) = *(str + i);
	}
	return (s);
}
