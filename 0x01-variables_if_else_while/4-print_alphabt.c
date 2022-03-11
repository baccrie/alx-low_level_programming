#include <stdio.h>
/**
 * main - Entry point
 * Task 3. alphABET
 * Return: Always 0 (Success)
 */
int main(void)
{
char letters;
for (letters = 'a'; letters <= 'z'; letters++)
{
if (letters == 'e')
{
continue;
}
if (letters == 'q')
{
continue;
}
putchar(letters);
}
putchar('\n');
return (0);
}
