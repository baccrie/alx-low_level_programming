#include "main.h"

/**
 * _strcmp -  compares two strings
 * @s1: A pointer to a char
 * @s2: A pointer to a char
 * Return: dest
 * Copyright © 2022 baccrie
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1 == s2)
	{
		return (0);
	}
	while (s1[i] != s2[i])
		i++;
	return (s1[i] - s2[i]);
}
