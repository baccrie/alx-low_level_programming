#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse mode
 * @s: A pointer to an integer
 * Task 4.  I can only go one way.
 * I've not got a reverse gear
 * Copyright © 2022 baccrie
 *Return: void
 */

void print_rev(char *s)
{
	/* loops variable */
	int i, j;

	i = 0;
	while (s[i])
	{
		i++;
	}
	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar ('\n');
	/* Copyright © 2022 baccrie */
}
