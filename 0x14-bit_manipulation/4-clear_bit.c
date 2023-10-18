#include "main.h"

/**
 * clear_bit - value of bit is set to 0
 * at specific index
 * @n: pointer
 * @index: bit index
 *
 * Return: success 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;

	if (*n & k)
		*n ^= k;

	return (1);
}
