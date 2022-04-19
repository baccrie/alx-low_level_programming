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
	int diff;

	if (s1 == s2)
	{
		diff = 0;
	}
	else if ((*s1) == (*s2))
	{
		diff = 0;
	}
	else
	{
		diff = (*s1) - (*s2);
	}
	return (diff);
	/* Copyright © 2022 baccrie */
}
