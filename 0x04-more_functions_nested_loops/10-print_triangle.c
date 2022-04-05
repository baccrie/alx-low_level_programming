#include "stdio.h"
/**
 * print_square - prints a square
 * @size: length and breadth of square
 * Return: 0 for size <= 0 else 1
 * Copyright © 2022 baccrie
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int p;

	i = 0;
	j = 0;
	p = 0;
	k = size - 1;
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		while (i < size)
		{
			while (j < size)
			{
				if (p < k)
				{
					putchar('a');
				}
				if (p >= k)
				{
					putchar('#');
				}
				p++;
				k--;
				j++;
			}
			j = 0;
			putchar('\n');
			i++;
		}
	}
	/* Copyright © 2022 baccrie */
}

int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
