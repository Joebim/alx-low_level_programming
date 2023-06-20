#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog
 * @d: A pointer to the struct dog to initialize
 * @name: The name to give the dog
 * @age: The age to give the dog
 * @owner: The owner to give the dog
 *
 * Description: Dynamically allocates memory for the name and owner strings
 * of the struct dog pointed to by @d, then sets the name, age, and owner
 * fields to the given values.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = strdup(name);
	if (d->name == NULL)
		return;

	d->age = age;

	d->owner = strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		return;
	}
}
