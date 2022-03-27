#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: A pointer to an int
 * Task 3. I do not fear computers, but
 * I fear the lack of them
 * Copyright © 2022 baccrie
 *Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	/* Copyright © 2022 baccrie */
}
