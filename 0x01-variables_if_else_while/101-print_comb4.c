#include <stdio.h>
/**
 * main - Entry point
 * Task 11. The success combination in
 * business is: Do what you do better...
 * and: do more of what you do...
 * Copyright © 2022 baccrie
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declaring variable for the for loops*/
	int left;
	int middle;
	int right;

	/* Outer loop */
	for (left = 48; left <= 55; left++)
	{
		/* middle loop */
		middle = left + 1;
		while (middle <= 56)
		{
			/* most inner loop */
			for (right = middle + 1; right <= 57; ++right)
			{
				putchar(left);
				putchar(middle);
				putchar(right);
				if (left == 55 && middle == 56 && right == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			middle++;
		}
	}
	putchar('\n');
	return (0);
	/* Copyright © 2022 */
}
