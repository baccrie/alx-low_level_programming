#include "main.h"
/**
 * print_diagonal - check the code
 * @n:
 * No return value
 */
void print_diagonal(int n)
{
	int count = 0;

	while (count < n)
	{
		_putchar(92);
		_putchar('\n');
		_putchar(' ');
		count++;
	}
	return;
}
