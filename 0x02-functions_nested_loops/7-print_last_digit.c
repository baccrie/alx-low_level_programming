#include "main.h"
/**
 * print_last_digit - prints the last digit
 * of a number
 * @n: n is an integer
 * Task 7. There are only 3 colors, 10 digits
 * and 7 notes; it's what we do with them 
 * that's important
 * Copyright © 2022 baccrie
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;
	if (n < 0)
	{
		lastDigit = lastDigit * (-1);
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
	/* Copyright © 2022 baccrie */
}
