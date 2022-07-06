#include "main.h"
#include <stdio.h>
/**
 * times_table - prints 9 times table starting with 0
 * Copyright © 2022 baccrie
 * Return: void
 */

void times_table(void)
{
	int i, j, ans;

	i = j = 0;
	ans = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			ans = i * j;
			if (j != 0)
				printf("%3d", ans);
			else
				printf("%d", ans);
			if (j != 9)
				printf(",");
			j++;
		}
		putchar('\n');
		i++;
	}
}
