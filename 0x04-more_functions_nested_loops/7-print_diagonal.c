#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n - no of times to print the diagonal
 * Copyright © 2022 baccrie
 * Return: 0 for success 1 for pass
 */

void print_diagonal(int n)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 1;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			while (j < k && k <= n)
			{
				if (j != (k - 1))
				{
					_putchar(' ');
				}
				if (j == (k - 1))
				{
					_putchar('\\');
				}
				j++;
			}
			_putchar('\n');
			i++;
			k++;
			j = 0;
		}
	}
	/* Copyright © 2022 baccrie */
}
