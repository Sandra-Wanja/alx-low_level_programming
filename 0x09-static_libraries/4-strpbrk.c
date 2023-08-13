#include "main.h"
/**
 * _strpbrk - searchs string for a set of bytes
 *
 * @s: string to be searched
 * @accept: bytes to search
 *
 * Return: pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
