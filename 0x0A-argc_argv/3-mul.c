#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the no of command line arguement
 * @argv: a pointer to the arguement
 * Copyright © 2022 baccrie
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
