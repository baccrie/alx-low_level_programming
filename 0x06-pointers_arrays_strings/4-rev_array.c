#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 * Return: returns void
 * Copyright © 2022 baccrie
 */

void reverse_array(int *a, int n)
{
	int *ptr_start, *ptr_end, i, tmp, len;

	i = 0;
	ptr_start = a;
	ptr_end = a;
	len = n - 1;

	while (i < len)
	{
		ptr_end++;
		i++;
	}
	i = 0;

	while (i < len / 2)
	{
		tmp = *ptr_start;
		*ptr_start = *ptr_end;
		*ptr_end = tmp;

		ptr_start++;
		ptr_end--;
		i++;
	}
	/* Copyright baccrie © 2022 */
}
