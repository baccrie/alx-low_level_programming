#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that prints a name.
 *@array: array
 *@size: size of the array
 *@action:callback function
 * Return: nothing
 * Copyright © 2022 baccrie
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{

	size_t i;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
