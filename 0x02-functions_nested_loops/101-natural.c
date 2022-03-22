#include <stdio.h>

/**
 * main - computes and prints the sum of all
 * the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum;
	int i;

	sum = 0;
	i = 1;
	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
		++i;
	}
	putchar('\n');
	return (0);
}
