#include "main.h"

/**
 * print_line - it draws a staright line
 * @n: the number of times '_' is printed
 * Return: void
 */
void print_line(int n)
{
    {
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}

	_putchar('\n');
}
