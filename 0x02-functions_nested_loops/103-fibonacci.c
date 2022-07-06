#include <stdio.h>

/**
 * main - prints the sum of evened fibonnaci
 * ers, starting with 1 and 2
 * followed by a new line
 * Copyright © 2022 baccrie
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int first, second, i, sum, third;

	first = 0;
	second = 1;
	i = 0;
	third = 0;
	sum = 0;
	while (third < 4000000)
	{
		third = first + second;
		if (third % 2 == 0)
			sum += third;
		first = second;
		second = third;
		i++;
	}

	printf("%lu\n", sum);
	return (0);
}
