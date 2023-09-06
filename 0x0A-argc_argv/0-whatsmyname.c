#include "main.h"
#include <stdio.h>

/**
 * main - prints its name
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	_printf("%s\n", argv[0]);

	return (0);
}
