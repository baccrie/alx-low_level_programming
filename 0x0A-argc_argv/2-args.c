#include <stdio.h>
/**
 * main - Entry point                                  * @argv - the no of command line arguement
 * @argc[] - a pointer to the arguement
 * Return: 0 or 1                                      * Copyright © 2022 baccrie
 */

int main (int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
}
