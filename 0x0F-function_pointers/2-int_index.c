#include "fucntion_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array input
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: no match, size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (n < size)
			{
				if (cmp(array[n])
					return (n);

				n++;
			}
		}
	}
	return (-1);
}
