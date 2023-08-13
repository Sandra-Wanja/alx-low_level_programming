#include "main.h"

/**
  * _memcpy - copy memory area
  * @dest: dest memory area
  * @src: src memory area
  * @n: bytes of memory area
  *
  * Return: dest memory area
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
