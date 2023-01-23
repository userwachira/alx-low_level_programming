#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	
	if (d->name == NULL)
		printf("(nil)", d->name);
	else
		printf("Name: %s\n", d->name);

	if (d->age == NULL)
		printf("(nil)", d->age);
	else
		printf("Age: %d\n", d->age);

	if (d->owner == NULL)
		printf("(nil)", d->owner);
	else
		printf("Owner: %s\n", d->owner);
}
