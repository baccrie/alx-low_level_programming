#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "main.h"


/**
 * string_nconcat - a function that returns ptr to heap
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 * Returns: Null or ptr
 * Copyright © 2022 baccrie
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	unsigned int k;

	char *ptr;
	if (ptr == NULL)
		return (NULL);
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
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= k)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';

	return (ptr);
}
