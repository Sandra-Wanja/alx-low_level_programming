#include "main.h"

/**
  * _islower - Checks for all lowercase characters and returns 1
  * @c: The character which is to be checked
  *
  * Return: 1 for any lowercase character or 0 for the rest
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
