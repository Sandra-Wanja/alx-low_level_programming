#include "main.h"

/**
 * factorial - returns factorial
 * @n: number to return its factorial
 *
 * Return: factorial of int
 */
int factorial(int n)
{
	if (n < 0)

		return (-1);

	if (n <= 1)

		return (1);


	return (n * factorial(n - 1));
}
