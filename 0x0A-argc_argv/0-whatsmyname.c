#include <stdio.h>
#include "main.h"

/**
 * main - program prints its name
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
