#include "main.h"

/**
 * print_square - prints a square
 * @size: length and breadth of square
 * Return: void
 * Copyright © 2022 baccrie
 */

void print_square(int size)
{
	int i, j;

	i = 0;
	j = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			j = 0;
			_putchar('\n');
			i++;
		}
	}
	/* Copyright © 2022 baccrie */
}
