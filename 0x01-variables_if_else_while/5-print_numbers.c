#include <stdio.h>

/**
 * main - prints single digit to the base of ten
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
