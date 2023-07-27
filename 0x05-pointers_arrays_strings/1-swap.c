#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: first integer to swap
 * @b: second integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
