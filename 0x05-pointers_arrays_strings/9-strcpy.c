#include "main.h"
#include <stdio.h>
/**
 * _strcpy -  copies the string pointed to by src
 * @dest: A pointer to an char
 * @src: A pointer to an char
 * Copyright © 2022 baccrie
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{

	int i, n;

	i = 0;
	while (src[i])
	{
		i++;
	}
	i = i + 1;
	o = 0;
	n = 0;
	while (n <= i)
	{
		dest[n] = *src;
		++n;
		++*src;
	}
	return (dest);
	/* Copyright © 2022 baccrie */

}
