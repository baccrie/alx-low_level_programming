#include "stdio.h"
#include "string.h"
#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = sizeof((*a)[i]) / sizeof(char);
		while (j < 8)
		{
			_putchar (a[i][j]);
			j++;
		}
		_putchar ('\n');
		i++;
	}

}
