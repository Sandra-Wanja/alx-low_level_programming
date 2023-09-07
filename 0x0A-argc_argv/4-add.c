#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int n;
	char *s;
	unsigned int j, sum = 0;

	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{
			s = argv[n];

			for (j = 0; j < strlen(s); j++)
			{
				if (s[j] < 48 || s[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(s);
			s++;
		}

		printf("%d\n", sum);
	}

	else
	{
		printf("0\n");
	}

	return (0);
}
