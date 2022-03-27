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
	int i, n;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	i = i;
	if ((i % 2) == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}
	while (n < (i - 1));
	{
		_putchar(str[n]);
		++n;
	}
	_putchar ('\n');
	/* Copyright © 2022 baccrie */

}
