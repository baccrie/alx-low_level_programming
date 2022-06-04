#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "main.h"

/**
 * string_nconcat - a function that returns ptr
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 * Return: Null or ptr
 * Copyright © 2022 baccrie
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int k, j;
	char *ptr;

	i = j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
	{
		k = strlen(s2);
	}
	else
	{
		k = n;
	}
	ptr = (char *)malloc(strlen(s1) + k);
	if (ptr == NULL)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j <= k)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';

	return (ptr);
}
