#include "main.h"
#include "stdio.h"

/**
 * cap_string - function that capitalises char after a separator
 * @str: a pointer to the string
 * Return: pointer to string
 * Copyright © 2022 baccrie
 */

char *cap_string(char *str)
{
	int i, j, k;
	int diff;
	char chars[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' ', '\0'};

	i = j = 0;
	diff = 'b' - 'B';

	while (str[i])
	{
		j = 0;
		while (chars[j])
		{
			if (str[i] == chars[j])
			{
				k = i + 1;
				if (str[k] <= 'z' && str[k] >= 'a')
				{
					i++;
					str[i] -= diff;
				}
			}
			j++;
		}
		i++;
	}

	return (str);
}
