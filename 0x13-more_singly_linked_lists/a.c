#include "stdio.h"
#include "stdlib.h"

int main(void)
{
	const int *ptr;
	int num = 33;
	int num1 = 103;
	ptr = &num;
	ptr = &num1;
}

