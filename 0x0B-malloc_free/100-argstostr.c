#include "main.h"
#include <stdlib.h>

/**
 * argstostr - connects all arguments of program
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: a pointer of type char
 */
char *argstostr(int ac, char **av)
{
	char *out;
	int c, n, k, pm;

	if (ac == 0)
		return (NULL);

	for (c = n = 0; n < ac; n++)
	{
		if (av[n] == NULL)
			return (NULL);

		for (k = 0; av[n][k] != '\0'; k++)
			c++;
		c++;
	}

	out = malloc((c + 1) * sizeof(char));

	if (out == NULL)
	{
		free(out);
		return (NULL);
	}

	for (n = k = pm = 0; pm < c; k++, pm++)
	{
		if (av[n][k] == '\0')
		{
			out[pm] = '\n';
			n++;
			pm++;
			k = 0;
		}
		if (pm < c - 1)
			out[pm] = av[n][k];
	}
	out[pm] = '\0';

	return (out);
}
