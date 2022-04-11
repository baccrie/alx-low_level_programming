#include "dog.h"

/**
 * init_dog - a function
 * @d: a struct variable
 * @name: a member
 * @age: member
 * @owner: member
 * Description: will update later
 * Return: void
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
}
