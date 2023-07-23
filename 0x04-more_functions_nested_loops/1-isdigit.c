#include "main.h"

/**
 * _isdigit -  checks for a digit
 * @c: integer to be checked
 *
 * Return: 1 if it is a digit or 0 for the rest
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
