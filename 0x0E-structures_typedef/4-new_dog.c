#include "dog.h"
#include <stdio.h>

/**
 * new_dog - Function thats give birth to new dog
 * @name: a member of dog 
 * @age: a member of dog struct
 * @owner: a member of dog struct
 * Description: later
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
