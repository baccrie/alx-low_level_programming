#include "stdio.h"

int main(void)
{
	unsigned long int first, second, i, third;

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

}
