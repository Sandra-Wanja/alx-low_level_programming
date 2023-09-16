#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  reallocates a memory block
 * @ptr: pointer of previous memory
 * @old_size: size of ptr
 * @new_size: size of new memory
 *
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == o && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
