#include "main.h"
#include <stdlib.h>

/**
 * str_concat - connects two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer of type char
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int n, p, b, maximum;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (n = 0; s1[n] != '\0'; n++)
		;

	for (p = 0; s2[p] != '\0'; p++)
		;

	ptr = malloc(sizeof(char) * (n + p + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (b = 0; b < n; b++)
		ptr[b] = s1[b];

	maximum = p;
	for (p = 0; p <= maximum; b++, p++)
		ptr[b] = s2[p];

	return (ptr);
}
