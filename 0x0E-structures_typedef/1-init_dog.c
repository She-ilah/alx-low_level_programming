#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * init_dog - initializes a variable struct dog
 * @d: parameter
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return:void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
