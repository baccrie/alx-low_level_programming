#include <stdio.h>
/**
 * main - Entry point
 * Task 10. Inventing is a combination
 * of brains and materials.
 * The more brains you use,
 * the less material you need
 * Copyright © 2022 baccrie
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declaring variable for the for loops*/
	int left;
	int right;

	/* Outer loop */
	for (left = 48; left < 57; left++)
	{
		/* inner loop */
		for (right = left + 1; right < 58; ++right)
		{
			putchar(left);
			putchar(right);
			if (left == 56 && right == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
	/* Copyright © 2022 */
}
