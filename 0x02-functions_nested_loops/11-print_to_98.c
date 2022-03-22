#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers to 98
 * @n: starting integer
 *
 * Description: prints all natural number fr
 * om n - 98
 * Copyright © 2022 baccrie
 * Return: void
 */
void print_to_98(int n)
{
	int m;
	if (n < 98)
	{
		for (m = n; m <= 98; m++)
		{
			printf("%d", m);
			if (m != 98)
			{
				printf(", ");
			}
		}
		putchar('\n');
	}
	else
	{
		for (m = n; m >= 98; m--)
		{
			printf("%d" m);
			if (m != 98)
			{
				printf(" ");
			}
		}
		putchar('\n');
	}
}
