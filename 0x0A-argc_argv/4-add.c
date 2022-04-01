#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc - no of command line arguement including filename
 * @argv[] - pointer to arguement
 * Return: 0 or 1
 * Copyright © 2022 baccrie
 */

int main(int argc, char *argv[])
{
	int *a;
	int i;
	int sum;

	if (argc <= 1)
	{
		printf("0\n");
	}
	//else if ();
	else if (argc > 1)
	{
		i = 0;
		sum = 0;
		while (i < argc)
		{
			a[i] = atoi(argv[i]);
			if (isalpha(argv[i]))
			{
				sum = '\0';
				printf("Error\n");
				return (1);
			}
			sum = sum + a[i];
			i++;
		}
		printf("%d\n", sum);
	}
}
