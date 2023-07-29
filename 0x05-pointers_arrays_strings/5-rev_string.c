#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	if (s == NULL || *s == '\0')
		return;

	int len = 0;
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		len++;
		end++;
	}

	end--;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}

