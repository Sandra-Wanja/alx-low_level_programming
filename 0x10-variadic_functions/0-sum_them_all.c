#include "variadic_functions.h"

/**
 * sum_them_all - returns sum
 * @n: no of args
 *
 * Return: addition product
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list newnums;
	int add = 0;
	unsigned int x;

	if (n == 0)
		return (0);

	va_start(newnums, n);

	for (x = 0; x < n; x++)
		add += va_arg(newnums, int);

	va_end(newnums);

	return (add);
}
