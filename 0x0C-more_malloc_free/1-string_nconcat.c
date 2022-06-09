#include "stdio.h"
#include "stdlib.h"
#include "string.h"
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
	unsigned int sum = n;
	char *ptr;
	int i, j;

	i = j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		sum = strlen(s2);
	ptr = (char *)malloc(strlen(s1) + sum + 1);
	if (ptr == NULL)
		return (NULL);
        while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
