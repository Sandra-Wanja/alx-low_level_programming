#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory of an arry
 * @nmemb: array elements
 * @size: size of array
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int n = 0, j = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = nmemb * size;
	p = malloc(n);

	if (p == NULL)
		return (NULL);

	while (j < n)
	{
		p[j] = 0;
		j++;
	}
	return (p);
}
