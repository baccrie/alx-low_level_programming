#include "main.h"
/**
 * more_numbers - print more numbers
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int num = 0;
	int count = 0;

	while (count <= 9)
	{
		while(num <= 14)
		{
			if (num > 9)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
		count++;
		num = 0;
	}
}
