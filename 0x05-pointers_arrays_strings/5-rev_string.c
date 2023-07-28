#include "main.h"

/**
 * rev_string - Reverse a string.
 * @s: The string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, c = 0;
	char *start, *end, aux;

	start = s;

	while (s[c] != '\0')
	{
		c++;
	}

	end = s + c - 1;

	for (i = 0; i < (c / 2); i++)
	{
		aux = s[i];
		s[i] = *end;
		*end = aux;
		end--;
	}
}
