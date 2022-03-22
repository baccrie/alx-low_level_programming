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
				if (cycle == 0 || cycle == 1)
				{
					putchar(' ');
				}
				else if (cycle == 2 && n < 4)
				{
					putchar(' ');
				}
				else if (cycle == 3 && n < 3)
				{
					putchar(' ');
				}
				else if (cycle == 4 && n < 2)
				{
					putchar(' ');
				}
				else if(cycle == 5 && n < 1)
				{
					putchar(' ');
				}
				else if ((cycle == 6 && n < 1) || (cycle == 7 && n < 1))
				{
					putchar(' ');
				}
				else if ((cycle == 8 && n < 1) || (cycle == 9 && n < 1))
				{
					putchar(' ');
				}
			}
			n++;
		}
		putchar('\n');
		cycle++;
	}
	/* Copyright © 2022 baccrie */
}
