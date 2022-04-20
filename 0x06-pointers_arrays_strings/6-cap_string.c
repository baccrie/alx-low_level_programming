#include "main.h"

/**
 * checks - a function that checks for separator
 * @sep: a separator
 * Return: 1 if it encounters a separator else 0
 * Copyright © 2022 baccrie
 */

int checks(char sep)
{
	switch (sep)
	{
		case ',':
		case ';':
		case '!':
		case '.':
		case '?':
		case '"':
		case ')':
		case '(':
		case '{':
		case '}':
		case ' ':
		case '\t':
		case '\n':
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
	int i;
	int diff;

	i = 0;
	diff = 'b' - 'B';
	while (*(str + i))
	{
		if (*(str + i) <= 'z' && *(str + i) >= 'a')
		{
			if (checks(*(str + i - 1)) || *(str + i) == *str)
			{
				*(str + i) -= diff;
			}
			else
			{
				str[i] = str[i];
			}
		}
		else
		{
			str[i] = str[i];
		}
		i++;
	}
	return (str);
}
