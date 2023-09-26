#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: spaces in between
 * @n: no of args passed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mylist;
	unsigned int i;
	char *ptr;

	va_start(mylist, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(mylist, char *);

		if (ptr)
			printf("%s", ptr);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(mylist);
}
