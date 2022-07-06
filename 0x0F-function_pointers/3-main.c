#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: size
  * @argv: character
  * Return: always 0.
  */

int main(int argc, char *argv[])
{
	int first, second;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	first = atoi(argv[1]);
	second = atoi(argv[3]);
	if (!get_op_func(argv[2]) || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && second == 0)
	{
		printf("Error\n");
		exit(100);
	}
		printf("%d\n", get_op_func(argv[2])(first, second));
	return (0);
}
