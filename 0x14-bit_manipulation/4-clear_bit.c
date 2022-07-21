#include "main.h"

/**
 * clear_bit - Entry point
 * @n: unsigned long integer
 * @index: index to set bit at
 *
 * Return: 1 if it worked, or -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux =  ~(1 << index);

	if (index > (sizeof((*n)) * 8))
		return (-1);

	*n = *n & aux;

	return (1);
}
