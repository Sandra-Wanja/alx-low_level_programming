#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's new name
 * @age: dog's new age
 * @owner: dog's new owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int n, qname, qowner;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL || !(name) || !(owner))
	{
		free(new_dog);
		return (NULL);
	}

	for (qname = 0; name[qname]; qname++)
		;
	for (qowner = 0; owner[qowner]; qowner++)
		;

	new_dog->name = malloc(qname + 1);
	new_dog->owner = malloc(qowner + 1);

	if (!(new_dog->name) || !(new_dog->owner))
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (n = 0; n < qname; n++)
		new_dog->name[n] = name[n];
	new_dog->name[n] = '\0';

	new_dog->age = age;

	for (n = 0; n < qowner; n++)
		new_dog->owner[n] = owner[n];
	new_dog->owner[n] = '\0';

	return (new_dog);
}
