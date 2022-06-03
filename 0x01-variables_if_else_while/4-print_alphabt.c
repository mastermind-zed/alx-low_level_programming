#include #include <stdio.h>
/**
 * main - Prints the alphabet without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
	if (c != 'e' && c != 'q')
	putchar(c);
	}

	putchar('\n');
	return (0);
}<stdio.h> 

int main ()
{
	char ch = 'a' ;

	printf("Lowercase alphabets: \n") ;
	while(ch <= 'z')
	{
		pritnf("%c ", ch) ;
		ch++;
	}
	pritnf ("\n") ;

	return 0;
}
