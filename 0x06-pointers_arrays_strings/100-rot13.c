#include "main.h"

/**
 * rot13 - a function that encodes a string the acient Rome way
 * @ch: string to encode
 * Return: pointer to ch
 * Copyright © 2022 baccrie
 */

char *rot13(char *ch)
{
	int i, j;
	char *input, *output;

	input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	i = 0;
	while (*(ch + i))
	{
		j = 0;
		while (*(input + j))
		{
			if (ch[i] == input[j])
			{
				ch[i] = output[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (ch);
	/*.Copyright © 2022 baccrie */
}
