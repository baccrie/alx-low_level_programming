//include "main.h"
#include <stdio.h>
/**
 * rev_string - prints a string in reverse mode
 * @s: A pointer to an int
 * Copyright © 2022 baccrie
 * Return: void
 */

void rev_string(char *s)
{
	int i, len, j;

	i = 0;
	while (s[i])
	{
		i++;
	}
	len = i - 1;
	j = 0;
	while (j < i)
	{
		s[j] = s[len];
		--len;
		++j;
	}
	/* Copyright © 2022 baccrie */
}

int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
