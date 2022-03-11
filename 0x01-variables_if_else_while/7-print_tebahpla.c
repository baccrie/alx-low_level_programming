#include <stdio.h>
/**
 * main - Entry - point
 * Task 7. sometimes suffer from insomnia.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet; /*declaring variable*/

for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
