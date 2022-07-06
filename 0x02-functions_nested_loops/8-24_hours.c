#include "main.h"
/**
 * jack_bauer - prints all the moments in bauers life
 * starting from 00:00 to 23:59
 * Task 8.I am a federal agent Jack Bauer
 * and today is the longest day of my life
 * Copyright © 2022 baccrie
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int i, j;

	i = j = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar(i / 10 + '0');
			_putchar(i + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
