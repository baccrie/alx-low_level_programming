#include <stdio.h>
/**
 * main - Entry point
 * Task 9. tience, persistence and
 * perspiration make an unbeatable
 * combination for success
 * Copyright 2022 © baccrie
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numb; /* Declaring variable for loop */
	
	for (numb = 48; numb <= 57; numb++)
	{
		putchar(numb);
		if (numb == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
	/* Copyright 2022 © baccrie */
}
