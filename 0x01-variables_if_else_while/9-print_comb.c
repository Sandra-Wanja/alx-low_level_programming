#include <stdio.h>

/**
 * main - prints seperated single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		{
			if (a < '8')
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

