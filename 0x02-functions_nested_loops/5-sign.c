#include "main.h"

/**
  * print_sign - Determines the sign of a number
  * @n: The number which will be checked
  *
  * Return: 1 for + number, - for negative number and zero for the rest
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
