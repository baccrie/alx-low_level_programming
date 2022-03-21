#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse mode
 * @s: A pointer to an integer
 * Task 4.  I can only go one way.
 * I've not got a reverse gear
 * Copyright © 2022 baccrie
 *
 *Return: void
 */

void print_rev(char *s)
{
	int c;/* variable for counting */

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}

	for (c = c - 1 ; c >= 0; c--)
	{
		_putchar (s[c]);
	}
	_putchar ('\n');
	/* Copyright © 2022 baccrie */
}
