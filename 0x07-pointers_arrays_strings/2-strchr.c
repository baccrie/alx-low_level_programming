#include "main.h"
#include "stdio.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to search
 * Return: Pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (i <= 10000)
		if (*s == c)
		{
			return (s);
		}
		++s;
		i++;
	}

	return (NULL);
}
