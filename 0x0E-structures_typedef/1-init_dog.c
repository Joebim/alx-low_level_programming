#include <stdlib.h>
#include <string.h>

/**
 * struct dog - a dog struct
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

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
	struct dog dog;

	d = &dog;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

	return (0);
}
