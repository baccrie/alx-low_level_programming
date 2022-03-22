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
	unsigned long int sum, sum1, sum2, evenSum;

	evenSum = 2;
	sum = 0;
	sum2 = 1;
	sum1 = 2;
	while (sum <= 4000000)
	{
		sum = sum1 + sum2;
		if ((sum % 2) == 0)
		{
			evenSum = evenSum + sum;
		}
		sum2 = sum1;
		sum1 = sum;
	}
	printf("%lu", evenSum);
	putchar('\n');
	return (0);
	/*.Copyright © baccrie 2022 */
}
