#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry - point
 * Task 1. The last digit
 * copyright © 2022 baccrie
 *
 * Return: Always  0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, (n % 10));
	/* note - the last number for any n number is n % 10 */
	if ((n % 10) > 5)/* if statement for last digit greater than 5 */
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) == 0)/* if statement for last digit equals zero */
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else/* if statement for last digit less and 6 and not zero */
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
	/* copyright 2022 © baccrie */
}
