#ifndef _MAIN_H
#define _MAIN_H_

/**
 * struct dog - details of a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: details of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - new name for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
