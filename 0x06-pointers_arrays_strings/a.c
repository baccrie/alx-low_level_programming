#include "stdio.h"

int test()
{
	char p = 'q';
	char q = 'a';

	return (p - q);
}

int main ()
{
	int a[8] = {1, 3, 5, 7, 9, 23, 65, 89};
	int *b = a;
	int *c = b;

	while (*b)
	{
		printf("%d, ", *b++);
	}
}
