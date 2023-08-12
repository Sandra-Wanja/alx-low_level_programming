#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
  * _sqrt_recursion - returns natural square root of a number
  * @n: number to get its natural square root
  *
  * Return: the square root of given number
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - calculates natural square root
  * @n: number get its square root
  * @i: iterate number
  *
  * Return: natural square root
  */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
