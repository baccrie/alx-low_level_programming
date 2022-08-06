#include "stdio.h"
#include "stdlib.h"
#include "main.h"

/**
 * len - Returns the length of a string
 * @ptr: pointer to string
 * Return: length
 */

unsigned int len(char *ptr)
{
	unsigned int i;

	i = 0;
	while (ptr[i])
	{
		i++;
	}

	return (i);
}

/**
 * string_nconcat - later
 * @s1: first strimg
 * @s2: second string
 * @n: integer
 * Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;
	unsigned int length, si1, si2, total;

	length = n;
	i = j = 0;
	if (n >= len(s2))
	{
		length = len(s2);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	si1 = len(s1);
	si2 = len(s2);
	total = si1 + si2 + 1;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < length)
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
