#include <stdio.h>

/**
 * main - Entry point
 * Task 9: 9. Fizz-Buzz
 * Return: 0 or 1
 * Copyright © 2022 baccrie
 */

int main()
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf(" Fizz");
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			if (i != 1)
			{
				printf(" ");
			}
			printf("%d", i);
		}
		i++;
	}
	_putchar('\n');
	/* Copyright © 2022 baccrie */
}
