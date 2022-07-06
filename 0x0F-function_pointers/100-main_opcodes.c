#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x, bytes;
	char *abc = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < bytes; x++)
	{
		printf("%02x", abc[x] & 0xFF);
		if (x != bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
