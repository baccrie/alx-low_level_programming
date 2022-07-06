#include "stdio.h"

int main(void)
{
	int i = 0;
	int j = 0;
	int ans = 1;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			ans = i * j;
			if (j != 0)
				printf("%3d", ans);
			else
				printf("%d", ans);
			if (j != 9)
				printf(",");
			j++;
		}
		putchar('\n');
		i++;
	}
}
