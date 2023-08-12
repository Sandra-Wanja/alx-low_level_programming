#include "holberton.h"
/**
 *  _strlen_recursion - finds the length of a string
 * @s: pointer to starting point of a string
 *
 * Return: integer value representing length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
/**
 * pal_check - checks for palindrome
 * @a: start of string
 * @length: length of the string
 *
 * Return: 1 if it is a palindrome, 0 otherwise
 */
int pal_check(char *a, int length)
{
	if (length <= 1)
		return (1);
	else if (a[0] != a[length - 1])
		return (0);
	else
		return (pal_check((a + 1), (length - 2)));
}
/**
 * is_palindrome - checks for palindrome recursively
 * @s: pointer to starting point of a string
 *
 * Return: 1 if it is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (pal_check(s, len));
}
