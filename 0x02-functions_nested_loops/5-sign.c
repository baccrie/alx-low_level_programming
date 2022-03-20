#include "main.h"
/**
 * print_sign - prints sign of a number
 * *@n: The int to use
 * Return: Returns 1 and prints + if n is greater than zero , returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 * Copyright © 2022 baccrie
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
	/* Copyright 2022 © baccrie all right reserved */
}
