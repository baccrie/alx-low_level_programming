#include "main.h"

/**
 * print_triangle - prints triangle with # sign
 * @size: base and height of triangle
 * Return: 0 for size <= 0 else 1
 * Copyright © 2022 baccrie
 */

void print_triangle(int size)
{
	int i, j, k;

	i = 0;
	k = size - 1;
	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				if (j < k)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				j++;
			}
			k--;
			i++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
	/* Copyright © 2022 baccrie */
}
