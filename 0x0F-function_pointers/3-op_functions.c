#include "3-calc.h"

/**
 * int op_add - adds two integers
 * @a: number to add
 * @b: number to add
 *
 * Return: sum of two ints
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first int value
 * @b: second int value
 *
 * Return: int (difference)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: first int value
 * @b: second int value
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: first int value
 * @b: second int value
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns remainder
 * @a: first int value
 * @b: second int value
 *
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
