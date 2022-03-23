#include "main.h"
/**
 * print_line - prints straight line
 * @n: parameter
 */
void print_line(int n)
{
	int count;
	char c;

	c = '_';
	count = 1;
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		while (count <= n)
		{
			putchar(c);
			++n;
		}
		putchar('\n');
	}
}
