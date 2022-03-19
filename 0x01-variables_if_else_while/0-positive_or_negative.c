#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry - point
 * Task 0. Positive anything is better than
 * negative nothing
 * copyright © baccrie 2022
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)/* If statement starts here for positive n */
	{
		printf("%d is positive", n);
	}
	else if (n == 0)/* if else for n is zero */
	{
		printf("%d is zero\n", n);
	}
	else/* if statement for negative n */
	{
		printf("%d is negative\n", n);
	}

	return (0);
		/* copyright 2022 © baccrie */
}
