#include "stdio.h"

int main()
{
	char *ch[] = {1, 3, 4, 5};
	int *a = ch;

	printf("%d", atoi(a[2]));
}
