#include "stdio.h"

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

	if (s1 == s2)
	{
		return (0);
	}

	return (s1[0] - s2[0]);
}
