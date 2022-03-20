#include <stdio.h>
/**
 * main - Entry point
 * Task 12. Software is eating the World
 * Copyright © 2022 baccrie
 * Return: Always 0 (Success)
 */

int main(void)

{
	int first_nums;
	int second_nums;

	/*for 0-9 with ASCII*/
	for (first_nums = 0; first_nums < 100 ; first_nums++)
	{
		for (second_nums = first_nums + 1 ; second_nums < 100; second_nums++)
		{
			putchar (first_nums / 10 + '0');
			putchar (first_nums % 10 + '0');
			putchar (' ');
			putchar (second_nums / 10 + '0');
			putchar (second_nums % 10 + '0');
			if (first_nums == 98 && second_nums == 99)
			{
				break;
			}
			putchar(',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
	/* Copyright 2022 © baccrie */
}
