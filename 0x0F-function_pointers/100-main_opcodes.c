#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints opcodes
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num_bytes, n;
	char *optr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (n = 0; n < num_bytes; n++)
	{
		printf("%02x", optr[n] & 0xFF);
		if (n != num_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
