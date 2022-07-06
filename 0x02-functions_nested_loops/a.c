#include "stdio.h"

int main(void)
{
	unsigned long int first, second, i, sum, third;

	first = 0;
	second = 1;
	i = 0;
	third = 0;
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
}
