#include "stdlib.h"
#include "main.h"
#include "string.h"

/**
 * _strdup - a function that returns a pointer to heap
 * @str: a string passed
 * Return: NULL or ptr
 * Copyright © 2022 baccrie
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;

	i = 0;
	if (str == NULL)
		return NULL;
	ptr = (char*)malloc(strlen(str));
	if (ptr == NULL)
		return NULL;
	while (str[i])
	{
		*(ptr + i) = *(str + i);
		i++;
	}

	return (ptr);
}
