#include "main.h"

/**
 * get_bit - gives value of bit at
 * specified index
 * @n: integer value input
 * @index: specific index of bit
 *
 * Return: int value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int d;

	if (n == 0 && index < 64)
		return (0);

	for (d = 0; d <= 63; n >>= 1, d++)
	{
		if (index == d)
		{
			return (n & 1);
		}
	}

	return (-1);
}
