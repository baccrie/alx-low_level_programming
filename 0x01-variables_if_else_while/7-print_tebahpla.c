#include <stdio.h>
/**
 * main - Entry - point
 * Task 7. sometimes suffer from insomnia.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char alphabet; /*declaring the variable for the loop statement*/

        for (alphabet = 'z'; alphabet >='a'; alphabet--)
        {
                putchar(alphabet);
        }
        putchar('\n');
        return (0);
}
