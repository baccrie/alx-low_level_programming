#include <stdio.h>

/**
 * main - Entry
 * Task 11 Prime factors
 * Return: void
 * Copyright © 2022 baccrie
 */

int main(void)
{
	long int i;
	long int n;
	int prime;

	i = 612852475143;
	n = i - 1;
	while (i > 0)
	{
		if (i % n == 0)
		{
			prime = n;
			break;
		}
		n--;
	}
	printf("%li\n", prime);
	return (0);
	/*.Copyright © 2022 baccrie */
}
