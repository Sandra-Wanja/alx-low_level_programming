#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: big endian 0, little endian 1
 */
int get_endianness(void)
{
	unsigned int p;
	char *k;

	p = 1;
	k = (char *) &p;

	return ((int)*k);
}
