#include "stdio.h"

char *string_toupper(char *str)
{
	int diff;
	diff = 'p' - 'P';
	int i = 0;

	while (*(str + i))
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{

			*(str + i) -= diff;
		}
		i++;
	}
	return (str);
}

int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}

