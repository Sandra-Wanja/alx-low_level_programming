#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array of chars
 * @size: array size
 * @c: character
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int n;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		ptr[n] = c;

	return (ptr);
}
