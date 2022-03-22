#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numb
 * ers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Declaring the variables using unsigned long because */
	/* it has more memory and can accommodate the big fibonnaci numbers */
	unsigned long int sum, sum1, sum2;
	int count;

	sum2 = 1;
	sum1 = 2;
	printf("%lu, %lu, ", sum2, sum1);
	while (count <= 47)
	{
		sum = sum1 + sum2;
		printf("%lu", sum);
		if (count != 47)
		{
			printf(", ");
		}
		sum2 = sum1;
		sum1 = sum;
		count++;
	}
	putchar('\n');
	return (0);
	/*.Copyright © baccrie 2022 */
}
