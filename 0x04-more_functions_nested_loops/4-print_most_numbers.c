#include "main.h"
/**
 * print_most_numbers - print numbers
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
int num = 0;

while ( num <= 9 )
{
if ( num == 2 )
{
continue;
}
if ( num == 4 )
{
continue;
}
_putchar(num);
num++;
}
_putchar('\n');
}
