#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9 and letters between a to f
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; ++x)
	putchar(x);
	for (x = 'a'; x <= 'f'; ++x)
	putchar(x);

	putchar('\n');

	return (0);
}
