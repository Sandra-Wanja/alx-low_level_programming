#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - checks for prime numbers
 * @n: int value to check
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks if int value is prime
 * @n: int value to check
 * @i: iterate number
 *
 * Return: 1 if its prime and 0 if its not
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
