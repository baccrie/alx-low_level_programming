#include "main.h"

/**
 * _strcat - copy wahala
 * @dest: destination
 * @src: source
 * Return - dest
 * Copyright © 2022 bsccrie
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
