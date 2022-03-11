#include <stdio.h>
/**
 * main - Entry point
 * Task 6. alphABET
 * Return: Always 0 (Success)
 */
int main(void)
{
int numb = 48;

while (numb <= 57)
{
putchar(numb);
putchar(',');
putchar(' ');
++numb;
}
putchar('\n');
return (0);
}
