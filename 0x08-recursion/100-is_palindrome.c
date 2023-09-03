#include "main.h"
#include <stdio.h>

int check_palindrome(char *s);

/**
 * is_palindrome - returns 1 if string is palindrome
 * @s: string to be checked
 *
 * Return: int value
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s));
}

/**
 * check_palindrome - confirms if string is palindrome
 * @s: string that will be checked
 *
 * Return: int value
 */
int check_palindrome(char *s)
{
	int n = _strlen_recursion(s) - 1;

	if (*s == s[n])
	{
		s++;
		n--;
	}

	else
	{
		return (0);
	}

	return (1);
}

/**
 * _strlen_recursion - calculates length of string
 * @s: string to count
 *
 * Return: string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
