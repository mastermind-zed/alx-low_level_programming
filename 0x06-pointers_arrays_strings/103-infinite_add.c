#include "main.h"

/**
 * infinite_add - function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will store the result
 * @size_r: the buffer size
 * Return: addition of two numbers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int add = 0, ab1, ab2, x, y;

	for (ab1 = 0; n1[ab1]; ab1++)
	;
	for (ab2 = 0; n2[ab2]; ab2++)
	;
	if (ab1 > size_r || ab2 > size_r)
		return (0);
	ab1--;
	ab2--;
	size_r--;
	for (x = 0; x < size_r; x++, ab1--, ab2--)
	{
		if (ab1 >= 0)
			add += n1[ab1] - 48;
		if (ab2 >= 0)
			add += n2[ab2] - 48;
		if (ab1 < 0 && ab2 < 0 && add == 0)
			break;
		r[x] = add % 10 + 48;
		add /= 10;
	}
	r[x] = '\0';
	if (ab1 >= 0 || ab2 >= 0 || add)
		return (0);
	for (x--, y = 0; x > y; x--, y++)
	{
		add = r[x];
		r[x] = r[y];
		r[y] = add;
	}
	return (r);
}
