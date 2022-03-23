#include "main.h"
/**
 * more_numbers - function prints 1 to 14
 * Return: 0
 */
void more_numbers(void)
{

	int cycle = 0;
	int num = 0;

	while (cycle <= 9)
	{
		while (num <= 14)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
			num++;

		}
	_putchar('\n');
	cycle++;
	num = 0;
	}
}
