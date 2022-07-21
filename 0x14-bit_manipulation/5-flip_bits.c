#include "main.h"

/**
 * flip_bits - Entry point
 * @n: Nunsigned integer
 * @m: unsigned integer
 *
 * Return: Number of bytes necessary to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = 0;
	int i = 0, bit = 0;

	result = n ^ m;

	for (i = 0; i <= 63 ; i++)
	{
		if ((result >> i) & 1)
			bit++;
	}

	return (bit);
}
