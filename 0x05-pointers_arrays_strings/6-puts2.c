#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string,
 * @str: A pointer to an integer
 * Task 6.Half the lies they tell about me
 * aren't true
 * Cooyright © 2022 baccrie
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		/* the if statement checks if position is even or odd */
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar ('\n');
	/* Copyright © 2022 baccrie */
}
