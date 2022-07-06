#include "stdio.h"

/**
 * print_times_table - prints the times
 * table
 * @n: integer for which the times table
 * will be printed
 *
 * Description: prints the times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, ans;

	i = j = 0;
	ans = 1;
	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			ans = i * j;
			if (j != 0)
				printf("%4d", ans);
			else
				printf("%d", ans);
			if (j != n)
				printf(",");
			j++;
		}
		putchar('\n');
		i++;
	}
}
