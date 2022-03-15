#include "main.h"
/**
 * print_alphabet_x10 - print 10 times 
 *
 * The main.h is an header file that has * the prototyping definition of the
 * _putchar function
 * copyright © baccrie 2022
 * Return: Always 0 (Success)                */
void print_alphabet_x10(void)
{
int cycle = 0; /* variable to do x10 */
int alphabets;

while (cycle < 10)/*prints a-z*/
{
for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
_putchar(alphabets);
}
cycle++;
_putchar('\n');
}
}
