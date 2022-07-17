#include "main.h"
#include "stdio.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 * Return: returns void
 * Copyright © 2022 baccrie
 */

void reverse_array(int *a, int n)
{
	int *p1, *p2, tmp, i, j;

	p1 = p2 = a;
	i = j = 0;
	while (i < (n - 1))
	{
		i++;
		p2++;
	}
	i = n / 2;
	while (j < i)
	{
		tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;

		j++;
		p1++;
		p2--;
	}
}
