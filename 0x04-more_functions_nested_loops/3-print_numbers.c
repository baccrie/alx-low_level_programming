#include "main.h"
/**
 * print_numbers - void
 * @num: prints char
 * copyright © baccrie 2022
 * Return: Always 0
 */

void print_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
