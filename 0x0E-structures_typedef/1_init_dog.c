#include "dog.h"

/**
 * init_dog - a function
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: owner
 * Description: later
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	/* Copyright © 2022 baccrie */
}
