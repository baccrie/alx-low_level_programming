#include "main.h"

/**
 * string_toupper - changee all lowercase letter to uppercase
 * @str: a pointer to a string
 * Return: str
 * Copyright © 2022 baccrie
 *
 */

char *string_toupper(char *str)
{
	int diff = 'c' - 'C';
	int i = 0;

	while (str[i])
	{
		if (str[i] <= 'z' &&  str[i] >= 'a')
		{
			str[i] -= diff;
		}
		i++;
	}
	return (str);
	/* Copyright © 2022 baccrie */
}
