#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numb
 * ers, starting with 1 and 2
 * followed by a new line
 * Copyright © 2022 baccrie
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Declaring the variables using unsigned long because */
	/* it has more memory and can accommodate the big fibonnaci numbers */
	unsigned long int first, second, third;
	int i = 0;

	first = 0;
	second = 1;
	i = 0;
	while (i < 50)
	{
		third = first + second;
		if (i < 49)
			printf("%lu, ", third);
		else
			printf("%lu\n", third);
		first = second;
		second = third;
		i++;
	}

	return;
}
