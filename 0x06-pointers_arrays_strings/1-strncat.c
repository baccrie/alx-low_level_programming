#include "stdio.h"
#include "string.h"

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
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[k])
	{
		k++;
	}
	if (n > k)
	{
		n = k;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
