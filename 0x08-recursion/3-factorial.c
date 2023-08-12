#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n : the number to check it's factorial
 *
 * Return: int value
 */
int factorial(int n)
{
	int n;

	if (n < '0')
	{
		return (-1);
	}
	if (n <= '1')
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
