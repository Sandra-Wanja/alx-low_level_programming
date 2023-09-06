#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}

	return (0);
}
