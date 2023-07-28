#include "main.h"
/**
*rev_string - Reverses a string
*@s: String to modify
*Return: void
*/
void rev_string(char *s)
{
int i = 0, length;
length = _strlen(s) - 1;
while (length > i)
{
swap_char(s + length, s + i);
i++;
length--;
}
}

/**
 *_strlen - returns length of a string
 * @s: string
 *Return: returns the lenght
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}

/**
*swap_char - swaps two characters
*@a: first character
*@b: second character
*Return: void
*/

void swap_char(char *a, char *b)
{
char tmp = *a;
*a = *b;
*b = tmp;
}
