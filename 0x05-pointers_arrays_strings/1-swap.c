#include <stdio.h>
/**
 * swap_int - (Task 1)unction that swaps the values of two integers.
 * @a: - an int
 * @b: - an int
 * Copyright © 2022 baccrie
 * Return: Either 0 or 1
 */

void swap_int(int *a, int *b)
{
	*a = *&b;
	*b = *&a;
	/* Copyright © 2022 baccrie */
}
