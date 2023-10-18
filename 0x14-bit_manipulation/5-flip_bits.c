#include "main.h"

/**
 * flip_bits - returns no of bits needed to move from
 * no to no
 * @n: first number
 * @m: second number
 *
 * Return: no of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bts;

	for (bts = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bts++;
	}

	return (bts);
}
