#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: dog's details
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("NAME: %s\n", (d->name) ? d->name : "(nil)");
		printf("AGE: %f\n", (d->age) ? d->age : 0);
		printf("OWNER: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
