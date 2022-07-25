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
	int i, j, k;

	i = 0;
	k = 0;
	while (i < 8)
	{
		k = 0;
		j = sizeof(a);
		while (k < j)
		{
			_putchar (a[i][k]);
			k++;
		}
		_putchar ('\n');
		i++;
	}
}
