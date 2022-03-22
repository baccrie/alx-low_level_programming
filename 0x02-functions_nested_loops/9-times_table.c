#include "main.h"
#include <stdio.h>
/**
 * times_table - prints 9 times table starting with 0
 * Copyright © 2022 baccrie
 * Return: void
 */

void times_table(void)
{
	int n;
	int cycle;

	cycle = 0;
	while (cycle <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			printf("%d", cycle * n);
			if (n != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		cycle++;
	}
	/* Copyright © 2022 baccrie */
}
	
