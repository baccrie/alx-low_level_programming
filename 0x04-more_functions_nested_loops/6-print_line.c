#include "main.h"

/**
 * print_line - prints straight line
 * @n: parameter
 * Copyright © 2022 baccrie
 * Return: void
 */

void print_line(int n)
{
	int i;

	i = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	/* Copyright © 2022 baccrie */
}
