#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: array to be inputed
 * @size: size of the array
 * @action: pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int w = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (w < size)
		{
			action(array[w]);
			w++;
		}
	}
}
