#include "main.h"

/**
 * set_bit - function that sets the valuse of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: the index starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked or -1 if an error ocurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n |= (1 << index);
	
	return (1);
}
