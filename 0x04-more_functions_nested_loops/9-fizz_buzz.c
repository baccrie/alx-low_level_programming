#include "stdio.h"

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
	putchar('\n');
}
