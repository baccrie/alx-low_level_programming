#include <stdio.h>
/**
 * main - Entry point
 * Task 4. When I was having that alphabet
 * soup, I never thought that it would
 * pay off
 * Copyright © 2022 baccrie
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;/* Declare variables */

	/* for loop */
	for (letters = 'a'; letters <= 'z'; letters++)
	{
		/* if statement to exclude letter e and q */
		if (letters == 'e' || letters == 'q')
		{
			continue;
		}
		putchar(letters);
	}
	putchar('\n');
	return (0);
	/* Copyright 2022 © baccrie */
}
