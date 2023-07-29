#include "main.h"

/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: void
 */
void positive_or_negative(int i)
{
	int i;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
