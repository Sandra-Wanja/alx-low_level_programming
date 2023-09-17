#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string btwn numbers
 * @n: no of args passed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list listing;
	unsigned int x;

	va_start(listing, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(listing, int));
		if (separator && x < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(listing);
}
