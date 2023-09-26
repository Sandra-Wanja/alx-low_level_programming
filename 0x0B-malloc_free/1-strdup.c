#include "main.h"
#include <stdlib.h>

/**
 * _strdup - newly allocates space in memory
 * @str: the string
 *
 * Return: pointer to array
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int n, z;

	if (str == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0'; n++)
		;

	ptr = (char *)malloc(sizeof(char) * (n + 1));

	if (ptr == NULL)
		return (NULL);

	for (z = 0; z <= n; z++)
		ptr[z] = str[z];

	return (ptr);
}
