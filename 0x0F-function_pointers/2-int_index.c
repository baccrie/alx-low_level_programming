#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *@array: array
 *@size: size of the array
 *@cmp:callback function
 *Copyright © 2022 baccrie
 * Return: no element matches -1
 **/

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	i = 0;
	if (size < 0)
		return (-1);
	if (array != NULL || (*cmp)(int) != NULL)
	{
		while (i < size)
		{
			if ((*cmp)(array[i]))
		}
		return (i);
		i++;
	}

	return (-1);
}
