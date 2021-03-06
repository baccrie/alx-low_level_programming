#include "stdlib.h"
#include "main.h"

/**
 * create_array - create an array
 * @size: size of memo on heap
 * @c: character to equate
 * Return: Null or ptr
 * Copyright © 2022 baccrie
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	return (ptr);
}
