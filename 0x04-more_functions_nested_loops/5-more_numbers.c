#include "main.h"

/**
 * more_numbers - function prints 1 to 14
 * Copyright © 2022 baccrie
 * Return: 0
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	for (j = 1; j <= 10; j++)
	{
		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
			i++;
		}
		i = 0;
		_putchar('\n');
	}
	/* Copyright © 2022 baccrie */
}
