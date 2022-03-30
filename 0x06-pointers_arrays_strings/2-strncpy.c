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
	int i;

	i = 0;
	char *tmp = dest;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
