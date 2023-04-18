#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog data
 * @name: dog name
 * @age: dog age
 * @0wner: dog owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}, dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * init_dog - initalize a variable of type struct dog
 * @dog: dog variable
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = malloc(strlen(name) + 1);
		if (d->name != NULL)
			strcpy(d->name, name);
		d->age = age;
		d->owner = malloc(strlen(owner) + 1);
		if (d->owner != NULL)
			strcpy(d->owner, owner);
	}
}
