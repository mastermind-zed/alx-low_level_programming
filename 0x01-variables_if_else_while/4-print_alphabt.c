#include <stdio.h> 

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
