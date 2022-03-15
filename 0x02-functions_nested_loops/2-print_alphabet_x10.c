#include "main.h"
/**
 * print_alphabet_x10 - print 10 times 
 * Holberton school of Engr
 * copyright © baccrie 2022
 * Return: Always 0 (Success)                */
void print_alphabet_x10(void)
{
int cycle = 0;
int alphabets;

while (cycle < 10)
{
for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
_putchar(alphabets);
}
cycle++;
_putchar('\n');
}
}
