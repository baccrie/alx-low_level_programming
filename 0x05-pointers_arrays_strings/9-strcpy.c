#include "main.h"
#include <main.h>
/**
 * _strcpy -  copies the string pointed to by src
 * @dest: A pointer to an char
 * @src: A pointer to an char
 * Copyright © 2022 baccrie
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{

	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
	/* Copyright © 2022 baccrie */

}
