#include "main.h"
/**
 * print_line - prints straight line
 * @n: parameter
 * Copyright © 2022 baccrie
 * Return: void
 */

void print_line(int n)
{
	int count;
	char c;

	c = '_';
	count = 1;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count <= n)
		{
			_putchar(c);
			count++;
		}
		_putchar('\n');
	}
	/* Copyright © 2022 baccrie */
}
