#include "stdio.h"
/**
 *_strncpy -  copies a string
 *@dest: A pointer to an char that will be updated
 *@src: A pointer to an char that will be updated
 *@n: value
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *tmp;
	int i, j;

	tmp = dest;
	i = j = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = tmp[j];
		i++;
		j++;
	}
	return (dest);
}
