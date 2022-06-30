#include "main.h"
#include <stdlib.h>

/** 
 * *malloc_checked - Entry point
 * @b: value passed in for array creation
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
