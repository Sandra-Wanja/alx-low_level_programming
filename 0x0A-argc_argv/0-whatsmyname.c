#include "main.h"
#include <stdio.h>

/**
 * main - prints a name followed by a new line
 * @argc: the number of command line arguments
 * @argv: array which contains command line arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
