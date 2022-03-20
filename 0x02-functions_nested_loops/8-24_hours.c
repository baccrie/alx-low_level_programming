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
	int first, second, third, fourth;/* Declaring variables for all the positions */

	/* Nesting of 4 while loops*/
	/* Study the loops carefully to understand how */
	/* 00:00 => 23:59 is printed */
	first = 0;
	while (first <= 2)
	{
		second = 0;
		while (second <= 9)
		{
			third = 0;
			while (third <= 5)
			{
				fourth = 0;
				while (fourth <= 9)
				{
					putchar(first + '0');
					putchar(second + '0');
					putchar(':');
					putchar(third + '0');
					putchar(fourth + '0');
					putchar('\n');
					fourth++;
				}
				third++;
			}
			if (second == 3)/* Breaks at 23:59 */
			{
				break;
			}
			second++;
		}
		first++;
	}
	putchar('\n');
	/* copyright © 2022 baccrie */
}
