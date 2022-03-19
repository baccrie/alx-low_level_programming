#include <stdio.h>
/**
 * main - Entry - point
 * Task 8. Hexadecimal
 * Copyright © 2022 baccrie
 * Return: Always  0 (Success)
 */
int main(void)
{
	/* Declare variables */
	int num;
	char letter;

	/* for loops */
	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
	/* Copyright © 2022 baccrie */
}
