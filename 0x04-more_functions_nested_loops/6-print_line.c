#include "main.h"

/**
 * print_line - it draws a staright line
 * @n: the number of times '_' is printed
 * Description: only uses _putchar to print
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
