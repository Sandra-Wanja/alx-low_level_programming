#include <stdlib.h>
#include "main.h"

/**
 * array_range -  creates an array of integers
 * @min: minimun value
 * @max: maximum value
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *n, u = 0;

	if (min > max)
		return (NULL);

	n = malloc(sizeof(int) * (min - max) + sizeof(int));
	if (n == NULL)
		return (NULL);

	while (min <= max)
	{
		n[u] = min;
		u++;
		min++;
	}
	return (n);
}
