#include "main.h"

/**
 * _isalpha - prints uppercase or lowercase letters
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for letters or 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
