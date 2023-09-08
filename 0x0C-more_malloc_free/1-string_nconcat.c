#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: counts string
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int p = 0, b = 0, y = 0, m = 0;
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	while (s1[p])
		p++;

	while (s2[b])
		b++;

	if (n >= b)
		y = p + b;

	else
		y = p + n;
	ptr = malloc(sizeof(char) * y + 1);

	if (ptr == NULL)
		return (NULL);

	b = 0;
	while (m < y)
	{
		if (m < p)
			ptr[m] = s1[m];
		if (m >= p)
		{
			ptr[m] = s2[b];
			b++;
		}
		m++;
	}
	ptr[m] = '\0';
	return (ptr);
}
