#include "dog.h"

/**
 * init_dog - 
 * @d:
 * @name:
 * @age:
 * @owner:
 * Description:
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
	/* Copyright © 2022 baccrie */
}
