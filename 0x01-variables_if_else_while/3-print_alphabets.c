#include <stdio.h>
/**
 * main - Entry point
 * Task 3. alphABET
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase; /* Declaring a variable for the lower case alphabets*/

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);
}
	char uppercase;

for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
putchar(uppercase);
}
putchar('\n');
return (0);
}
