#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if the given character is an uppercase letter
 * @c: the character to be checked
 *
 * Return: 1 for uppercase character and 0 for the rest
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
