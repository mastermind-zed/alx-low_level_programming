#include "holberton.h"

/**
 * clear_bit - Entry point
 * @n: unsigned long integer
 * @index: index to set bit at
 *
 * Return: 1 if it worked, or -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0x01;

	mask = ~(mask << index);
	
	if (mask == 0x00) /* something went wrong mask is all 0's */
	
		return (-1);
	
	*n &= mask;
	
	
	return (1);
}
