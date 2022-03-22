#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numb
 * ers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum, sum1, sum2, count;

	sum2 = 1;
	sum1 = 2;
	printf("%d, %d, ", sum2, sum1);
	while (count <= 48)
	{
		sum = sum1 + sum2;
		printf("%d", sum);
		if (count != 48)
		{
			printf(", ");
		}
		sum2 = sum1;
		sum1 = sum;
		count++;
	}
	putchar('\n');
	return (0);
}
