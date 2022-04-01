#include <stdio.h>
/**                                                    * main - Entry point                                  * @argv - the no of command line arguement
 * @argc[] - a pointer to the arguement
 * Return: 0 or 1                                      * Copyright © 2022 baccrie
 */

int main (int argc, char *argv[])
{
	int a;
	int b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	if (argc == 3)
	{
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
