#include "main.h"

/**
 * binary_to_uint - convert binary to int
 * @b: binary num
 *
 * Return: int value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int ln, base_two;

	if (!b)
		return (0);

	i = 0;

	for (ln = 0; b[ln] != '\0'; ln++)
		;

	for (ln--, base_two = 1; ln >= 0; ln--, base_two *= 2)
	{
		if (b[ln] != '0' && b[ln] != '1')
		{
			return (0);
		}

		if (b[ln] & 1)
		{
			i += base_two;
		}
	}

	return (i);
}
