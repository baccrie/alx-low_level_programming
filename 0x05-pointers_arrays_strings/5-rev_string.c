#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a string in reverse mode
 * @s: A pointer to an int
 * Copyright © 2022 baccrie
 * Return: void
 */

void rev_string(char *s)
{
	/* Declaring pointers and variables */
	/* The two pointers will move to the start and end*/
	/* of the strimg stored inside *s */

	char *ptr_start, *ptr_end, tmp;
	int i, j, len;

	i = 0;
	ptr_start = s;
	ptr_end = s;
	/*.Counting characters where *s is pointing */
	while (s[i])
	{
		i++;
	}
	len = i - 1;
	j = 0;
	/* Moving ptr_end to the end of the block */
	while (j < len)
	{
		ptr_end++;
		j++;
	}
	/* Exchanging values from front and back and*/
	/* Moving the pointers to the middle of the block simultaneously */
	for (i = 0; i < (len + 1) / 2; i++)
	{
		tmp = *ptr_start;
		*ptr_start = *ptr_end;
		*ptr_end = tmp;

		ptr_start++;
		ptr_end--;
	}
	/* Copyright © 2022 baccrie */
}
