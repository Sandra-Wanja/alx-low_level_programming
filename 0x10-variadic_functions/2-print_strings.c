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
	va_list listed;
	unsigned int x;
	char *ptr;

	va_start(listed, n);

	for (x = 0; x < n; x++)
	{
		ptr = va_arg(listed, char *);

		if (ptr != NULL)
			printf("%s", ptr);
		else
			printf("nil");

		if (x < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}

	printf("\n");
	va_end(listed);
}
