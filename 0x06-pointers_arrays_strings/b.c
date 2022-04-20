#include "stdio.h"

char *leet(char *enc)
{
	int i;
	
	i = 0;
	while (enc[i])
	{
		if (enc[i] == 'a' || enc[i] == 'A')
		{
			enc[i] = '4';
		}
		else if (enc[i] == 'e' || enc[i] == 'E')
		{
			enc[i] = '3';
		}
		else if (enc[i] == 'o' || enc[i] == 'O')
		{
			enc[i] = '0';
		}
		else if (enc[i] == 't' || enc[i] == 'T')
		{
			enc[i] = '7';
		}
		else if (enc[i] == 'l' || enc[i] == 'L')
		{
			enc[i] = '1';
		}
		else
		{
			enc[i] = enc[i];
		}
		i++;
	}
	return (enc);
}



int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
