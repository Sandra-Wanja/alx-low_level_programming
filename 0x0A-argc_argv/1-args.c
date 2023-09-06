#include <stdio.h>
#include "main.h"

/**
 * main - prints no of arguments
 * argc: argument count
 * argv: argument vector
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
