#include <stdio.h>
/**
 * set_string - sets value of pointer to char
 * @s: a pointer to the pointer we are chaning
 * @to: pointer to what we are setting it to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
