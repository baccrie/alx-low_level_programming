#include "main.h"
#include "stdio.h"

/**
 * string_toupper - changee all lowercase letter to uppercase
 * @str: a pointer to a string
 * Return: str
 * Copyright © 2022 baccrie
 *
 */

char *string_toupper(char *str)
{
	int i, diff;

	diff = 'Z' - 'z';
	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] += diff;
		}
		i++;
	}

	return (str);
}
