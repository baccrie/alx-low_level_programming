#include "dog.h"
#include <stdio.h>
#include "stdlib.h"

/**
 * new_dog -
 * @name:
 * @age:
 * @owner:
 * Description:
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
