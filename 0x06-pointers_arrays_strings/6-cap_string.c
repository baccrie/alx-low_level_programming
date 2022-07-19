#include "main.h"
#include "stdio.h"

/**
 * Separator - checks for separator
 * @ch: character to check
 * Returns: 0 or 1
 * Copyright © 2022 baccrie
 */

int Separator(char ch)
{
	switch (ch)
	{
		case ' ':
		case '\n':
		case '\t':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			return (1);
		default:
			return (0);
	}
}

/**
 * cap_string - function that capitalises char after a separator
 * @str: a pointer to the string
 * Return: pointer to string
 * Copyright © 2022 baccrie
 */

char *cap_string(char *str)
{
	int diff, i, j;

	diff = 32;
	i = 0;
	if (str[i] <= 'z' && str[i] >= 'a')
	{
		str[i] -= diff;
	}
	while (str[i])
	{
		j = 0;
		if (Separator(str[i]))
		{
			j = i + 1;
			if (str[j] <= 'z' && str[j] >= 'a')
			{
				str[j] -= diff;
				i++;
			}

		}
		i++;
	}

	return (str);
}
