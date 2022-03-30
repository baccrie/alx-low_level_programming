#include "stdio.h"

int test()
{
	char p = 'q';
	char q = 'a';

	return (p - q);
}

int main ()
{
	int a;
	a = test();
	printf("%d", a);
}
