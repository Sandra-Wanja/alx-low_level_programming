#include <stdlib.h>
#include "main.h"

/**
 * count_word - a helper function that counts
 * no of words in string
 * @s: string to be considered
 *
 * Return: no of words
 */
int count_word(char *s)
{
	int lag, z, q;

	lag = 0;
	q = 0;

	for (z = 0; s[z] != '\0'; z++)
	{
		if (s[z] == ' ')
			lag = 0;
		else if (lag == 0)
		{
			lag = 1;
			q++;
		}
	}

	return (q);
}
/**
 * **strtow - splits string to words
 * @str: string
 *
 * Return: double pointer
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
