#include "stdio.h"
/**
 * _strncat -  concatenates two strings
 * @dest: A pointer to a char
 * @src: A pointer to a char
 * @n: value
 * Copyright © 2022 baccrie
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{

	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
	/* Copyright © 2022 baccrie */
}
