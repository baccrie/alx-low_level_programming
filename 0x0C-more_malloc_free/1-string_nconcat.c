#include "stdio.h"
#include "stdlib.h"
#include "main.h"

/**
 * length - count the length of a string
 * @str: string to count
 * Return: length of str
 */

int length(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
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
	unsigned int i, j, sum;
	unsigned int a, b;

	i = j = 0;
	a = length(s1);
	b = length(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= b)
		n = b;
	sum = a + n + 1;
	ptr = (char *) malloc(sizeof(char) * sum);
	if (ptr == NULL)
		return (NULL);
        while (i < a)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
