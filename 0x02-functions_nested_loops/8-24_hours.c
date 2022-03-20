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
	int first, second, third, fourth;
	/* Declaring variables for all the positions */

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
					_putchar(first + '0');
					_putchar(second + '0');
					_putchar(':');
					_putchar(third + '0');
					_putchar(fourth + '0');
					_putchar('\n');
					fourth++;
				}
				third++;
			}
			second++;
			if (first == 2 && second == 4)
			{
				/* The if condition checks if time is 24:00 */
				/* And breaks out of the loop */
				break;
			}
		}
		first++;
	}
	/* i love watching 24 hours movie */
	/*but it took me a whole */
	/* 24 hours to write a script that prints */
	/*00:00 to 23:59 */
	/* I wont forget crazy characters like */
	/*chloe, Christopher Henderson, Nina myers */
	/* Tony Almeida, and the king Jack Bauer */
	/* copyright © 2022 baccrie */
}
