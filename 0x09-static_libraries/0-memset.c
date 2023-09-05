#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s: memory area to filled with the constant byte
  * @b: constant byte value to fill
  * @n: number of bytes to be filled
  *
  * Return: a pointer to the memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
