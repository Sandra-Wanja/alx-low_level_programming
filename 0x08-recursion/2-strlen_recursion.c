#include "main.h"

/**
 * _strlen_recursion - prints length of string
 * @s: string to print
 *
 * Return: integer value
 */
int _strlen_recursion(char *s);
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
