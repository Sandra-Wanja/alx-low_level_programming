#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit of the number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (n > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lastd);
	} else if (n == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastd);
	} else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}

	return (0);
}
