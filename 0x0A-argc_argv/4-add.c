#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: no of CL arguement
 * @argv: arr of pointers
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, sum;
	int chr;

	i = 1;
	sum = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			chr = atoi(argv[i]);
			if (!isdigit(chr))
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
	}

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		chr = atoi(argv[i]);
		sum += chr;
		i++;
	}
	printf("%d\n", sum);
}
