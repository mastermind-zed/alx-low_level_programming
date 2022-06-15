#include "main.h"

/**
 * reverse_array - function that reverse the content of an array
 * @a: first integer
 * @n: second integer
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
int x;
int y;
int temp;

for (x =0, y = n - 1; x < y; x++, y--)
{
	temp = a[x];
	a[x] = a[y];
	a[y] = temp;
}
}
