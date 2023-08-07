#include "main.h"
/**
 * _strpbrk - searchs string for a set of bytes
 *
 * @s: string to be searched
 * @accept: bytes to search
 *
 * Return: pointer to the byte
 * @accept, or NULL if the byte is not found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
