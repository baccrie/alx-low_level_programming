#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 * Task 2. 10 x alphabet
 * Cooyright © 2022 baccrie
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int alphabet; /*Declaring variable*/
	int cycle;

	cycle = 0;
	while (cycle < 10) /*While loop */
	{
		for (alphabet = 'a' ; alphabet <= 'z'; alphabet++) /*for loop*/
		{
			_putchar(alphabet);
		}
		cycle++;
		_putchar('\n');
	}
}
