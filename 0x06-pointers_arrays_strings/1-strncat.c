#include "main.h"
/**
 *_strncat -  concatenates two strings
 *@dest: A pointer to an char that will be updated
 *@src: A pointer to an char that will be updated
 *@n: value
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i,j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}

	while (j <= n)
	{
		dest[i] = s[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
