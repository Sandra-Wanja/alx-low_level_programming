#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @i: input number as integer
 *
 * Return: absolute value of the integer
 */
int _abs(int i)
{
	if (i < 0)
	{
		int abs_val;

		abs_val = i * -1;

		return (abs_val);
	}

	return (i);
}
