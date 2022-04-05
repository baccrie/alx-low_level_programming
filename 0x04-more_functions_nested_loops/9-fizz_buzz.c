#include <stdio.h>

/**
 * main - Entry point
 * Task 9: 9. Fizz-Buzz
 * Return: 0 or 1
 * Copyright © 2022 baccrie
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	putchar('\n');
	return (0);
	/* Copyright © 2022 baccrie */
}
