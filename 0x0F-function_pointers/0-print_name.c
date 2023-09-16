#include "function_pointers.h"

/**
 * print_name - name gets printed
 * @name: name to be printed
 * @f: pointer to a function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
