#include "main.h"

/**
 * set_bit - value of bit is set to 1
 * @n: pointer to int
 * @index: specified index of bit
 *
 * Return: int value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
		return (-1);

	b = 1 << index;
	*n = (*n | b);

	return (1);
}
