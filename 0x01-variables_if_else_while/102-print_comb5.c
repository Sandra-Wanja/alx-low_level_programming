#include <stdio.h>

/**
  * main - prints three seperated digits
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int c, i, n, j;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (n = 48; n <= 57; n++)
			{
				for (j = 48; j <= 57; j++)
				{
					if (((n + j) > (c + i) &&  n >= c) || c < n)
					{
						putchar(c);
						putchar(i);
						putchar(' ');
						putchar(n);
						putchar(j);

					if (c + i + n + j == 227 && c == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
