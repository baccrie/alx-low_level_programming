#include "main.h"
/**
 * print_alphabet - print alphabet
 * Task 1. I sometimes suffer from insomnia.
 * And when I can't fall asleep,
 * I play what I call the alphabet game.
 *
 * The main.h is an header file that has th
 * the prototyping definition of the
 * copyright © baccrie 2022
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	/* declaring the alphabet variable */
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');
	/* copyright © 2022 baccrie */
}
