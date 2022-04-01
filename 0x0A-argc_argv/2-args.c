#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: the no of command line arguement
 * @argv: a pointer to the arguement
 * Return: 0
 * Copyright © 2022 baccrie
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
	/*.Copyright 2022 © baccrie */
}
