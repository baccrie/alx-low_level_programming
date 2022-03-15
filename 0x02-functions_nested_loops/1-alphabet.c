#include "main.h"
/**
 * main - Entry point
 * The main.h is an header file that has th
 * the prototyping definition of the
 * _putchar function
 * copyright © baccrie 2022
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
/* defining the alphabet vafiable */
char alphabets;

for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
_putchar(alphabets);
}
_putchar('\n');
}

