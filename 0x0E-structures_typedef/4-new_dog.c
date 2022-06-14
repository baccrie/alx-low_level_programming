#include "stdlib.h"
#include "dog.h"
/**
 * new_dog - A new dog
 * @name: name of dog
 * @age: dog's age
 * @owner: owner of dog
 * Return: ptr to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, j, k, l;
	i = j = k = l = 0;

	if (!(name) || !(owner))
	{
		return (NULL);
	}
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	while (name[i])
	{
		i++;
	}
	while (owner[j])
	{
		j++;
	}

	ptr->name = malloc(sizeof(char) * i + 1);
	ptr->owner = malloc(sizeof(char) * j + 1);

	if ((ptr->name == NULL) || (ptr->owner == NULL))
	{
		free (ptr);
		return (NULL);
	}
	while (name[k])
	{
		ptr->name[k] = name[k];
		k++;
	}
	ptr->name[k] = '\0';
	ptr->age = age;

	while (owner[l])
	{
		ptr->owner[l] = owner[l];
		l++;
	}
	ptr->owner[l] = '\0';

	return (ptr);
}
