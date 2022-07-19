#include "main.h"

/**
 * leet - a function that encodes a string
 * @enc:  pointer that stores string to encode
 * Return: a pointer to the string
 * Cooyright © 2022 baccrie
 */

char *leet(char *enc)
{
	char *cha, *num;
	int i, j;

	cha = "LTOEAltoea";
	num = "1703417034";
	i = 0;

	while (enc[i])
	{
		j = 0;
		while (cha[j])
		{
			if  (enc[i] == cha[j])
			{
				enc[i] = num[j];
			}
			j++;
		}
		i++;
	}

	return (enc);
}
