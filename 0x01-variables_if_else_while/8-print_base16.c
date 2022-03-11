#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry - point
 * Task 8. Hexadecimal
 *
 * Return: Always  0 (Success)
 */
int main(void)
{
int num = 48;
char letter = 'a';

while (num <= 57)
{
putchar(num);
++num;
}
while (letter <= 'f')
{
putchar(letter);
++letter;
}
putchar('\n');
return (0);
}
