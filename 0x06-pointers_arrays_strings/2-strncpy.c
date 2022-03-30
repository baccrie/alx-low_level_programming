#include "main.h"
/**
 * _strncpy -  a function that copies a string
 * dest: A pointer to an char that will be updated
 * @src: A pointer to an char that will be updated
 * @n: value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
	/* Copyright © 2022 baccrie */
}
