#include "stdio.h"
#include "main.h"

/**
 * _strncpy
 * @dest - destination
 * @src - source
 * @n - no of byte to copy
 * Return: dest
 * Copyright © 2022 baccrie
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, k;

	i = j = k = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		j++;
	}
	if (j >= n)
	{
		i = 0;
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}

		k = n - i;
		j = 0;
		while (j < k)
		{
			dest[i] = '\0';
			i++;
			j++;
		}
	}

	return (dest);
}
