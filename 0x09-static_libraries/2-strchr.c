#include "main.h"

/**
  * _strchr - locate character in string
  * @s: string to be searched
  * @c: character to be found
  *
  * Return: pointer to first occurrence
  */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
