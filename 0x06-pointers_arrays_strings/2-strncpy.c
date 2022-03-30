#include "main.h"
/**
 *_strncpy -  copies a string
 *@dest: A pointer to an char that will be updated
 *@src: A pointer to an char that will be updated
 *@n: value
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, k, l;

	i = 0;
	k = 0;
	j = 0;
	while (src[i])
	{
		i++;
	}
	if ( n <= i)
	{
		while (j < n)
		{
			dest[j] = src[j];
			j++;
		}
	}
	else
	{
		while (k < n)
		{
			dest[k] = src[k];
			k++;
		}
		l = n + 1;
		while (dest[l])
		{
			dest[l] = dest[j];
			l++;
			j++;
		}
	return (dest);
	}
}
