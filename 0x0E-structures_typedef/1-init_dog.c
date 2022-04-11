#include "dog.h"

/**
 * void init_dog - 
 * @d:
 * @name:
 * @age:
 * @owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
