#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: A pointer to an integer
 * @n: return value
 * Copyright © 2022 baccrie
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	n = n - 1;
	i = 0;
	while (i <= n)
	{
		printf("%d", a[i]);
		if (i != n)
		{
			printf(", ");
		}
		i++;
	}

	printf("\n");
	/* Copyright © 2022 baccrie */
}
