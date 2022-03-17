#include "main.h"
/**
 * more_numbers - print more numbers
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int num;
	int count;

	count = 1;
	while (count <= 10)
	{
		num = 0;
		while(num < 15)
		{
			_putchar(num);
			++num;
		}
		_putchar('\n');
		count++;
	}
	_putchar('\n');
}
