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
	int i, j;
	unsigned int a, b;

	i = j = a = b = 0;
	sum = n;
	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= b)
		n = b;
	ptr = (char *)malloc(a + n + 1);
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
