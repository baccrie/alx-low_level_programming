#include "stdio.h"
#include "stdlib.h"
#include "main.h"

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
	int i, j, len;

	len = n;
	i = j = 0;
	if (n >= strlen(s2))
	{
		len = strlen(s2);
	}
	if (s1 == NULL)	
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = malloc(strlen(s1) + strlen(s2) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < len)
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
