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
	int i;
	int conv, sum;

	i = 1;
	sum = 0;
	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		conv = atoi(argv[i]);
		if (!isdigit(conv))
		{
			printf("Error\n");
			return (1);
		}
	}
	}
	i = 1;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		conv = atoi(argv[i]);
		sum += conv;
		i++;
	}
	printf("%d\n", sum);
}
