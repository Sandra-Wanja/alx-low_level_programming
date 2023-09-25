#include "variadic_functions.h"

/**
 * print_all - function to print anything
 * @format: list of arguments passed
 * to function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list mylist;
	unsigned int n = 0, m, o = 0;
	char *ptr;
	const char t_arg[] = "cifs";

	va_start(mylist, format);
	while (format && format[n])
	{
		m = 0;
		while (t_arg[m])
		{
			if (format[n] == t_arg[m] && o)
			{
				printf(", ");
				break;
			} m++;
		}
		switch (format[n])
		{
		case 'c':
			printf("%c", va_arg(mylist, int)), o = 1;
			break;
		case 'i':
			printf("%d", va_arg(mylist, int)), n = 1;
			break;
		case 'f':
			printf("%f", va_arg(mylist, double)), o = 1;
			break;
		case 's':
			ptr = va_arg(mylist, char *), o = 1;
			if (!ptr)
			{
				printf("(nil)");
				break;
			}
			printf("%s", ptr);
			break;
		} n++;
	}
	printf("\n"), va_end(mylist);
}
