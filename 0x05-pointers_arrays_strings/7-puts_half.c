#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: A pointer to an integer
 * Task 7. Winning is only half of it
 * Having fun is the other half
 * Copyright © 2022 baccrie
 *
 *Return: void
 */

void puts_half(char *str)

{
	int i, last;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	last = (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
		_putchar (str[i]);
	}

	_putchar ('\n');
	/* Copyright © 2022 baccrie */

}
