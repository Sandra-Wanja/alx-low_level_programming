#include "main.h"

/**
 * binary_to_uint - binary to unsigned int
 * @b: pointer to binary array
 *
 * Return: unsigned integer value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int h;
	int n, power_two;

	if (!b)
		return (0);

	h = 0;

	for (n = 0; b[n] != '\0'; n++)
		;

	for (n--, power_two = 1; n >= 0; n--, power_two *= 2)
	{
		if (b[n] != '0' && b[n] != '1')
		{
			return (0);
		}

		if (b[n] & 1)
		{
			h += power_two;
		}
	}

	return (h);
}
