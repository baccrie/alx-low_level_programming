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
	int co; /*Declaring variable for the loop */

	for (co = 0; str[co] != '\0'; co++)
	{
		if (co % 2 == 0)
		_putchar (str[co]);
	}
	_putchar ('\n');
	/* Copyright © 2022 baccrie */
}
