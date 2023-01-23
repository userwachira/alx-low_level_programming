#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * int_dog - initialize struct dog
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
