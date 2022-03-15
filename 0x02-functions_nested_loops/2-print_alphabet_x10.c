#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the 
 * alphabet in lower case
 * lowercase
 * The main.h is an header file that has th  * the prototyping definition of the
 * _putchar function
 * copyright © baccrie 2022
 * Return: Always 0 (Success)                */
void print_alphabet_x10(void)
{
int cycle = 0; /* variable to do x10 */
char alphabets;

while (cycle < 10)/* while loop that makes
*the code loop 10 times*/
{
for (alphabets = 'a'; alphabets <= 'z'; alphabets++)/* for loop that prints a-z*/
{
_putchar(alphabets);
}
cycle++;
_putchar('\n');
}
}
