#include <stdio.h>

/**
 * beforemain - function that should be 
 * executed before the main function
 *
 * Return: void
 */

void __attribute__ ((constructor)) beforemain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
