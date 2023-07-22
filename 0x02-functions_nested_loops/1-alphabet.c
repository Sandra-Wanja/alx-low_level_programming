#include "main.h"

/**
 * print_alphabet - prints alphabet
 * it prints alphabet in lowercase
 *
 * Return: no return
 */

void print_alphabet(void);
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
