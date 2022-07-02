#include "stdio.h"

/**
 * main - Enter Trabaye
 * Return: Owo Baba ijebu Dapada
 */

int main(void)
{
	int left, right;

	left = 48;
	while (left <= 56)
	{
		right = left + 1;
		while (right <= 57)
		{
			putchar(left);
			putchar(right);
			if (left == 56 && right == 57)
				break;
			putchar(',');
			putchar(' ');
			right++;
		}
		left++;
	}
	putchar('\n');
	return (0);
}

