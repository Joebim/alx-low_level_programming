#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * struct dog - a dog struct
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner's name
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/* function prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

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
