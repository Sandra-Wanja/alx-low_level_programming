#include <stdio.h>

/**
 * main - prints numbers from zero to nine
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
