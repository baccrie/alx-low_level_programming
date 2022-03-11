#include <stdio.h>                          /**
 * main - Entry - point
 * Task 3. alphABET
 * This c script is written by baccrie © 20
 * 22 no 
 * Return: Always 0 (Success)
 */
int main(void)
{
        char lowercase; /* Declaring a variable for the lower case alphabets*/

        for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
        {
                putchar(lowercase);
	}
	char uppercase; /* Declaring a varia
ble for the upper case alphabets*/
                                                    for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)                                     {                                                   putchar(uppercase);
        }

        putchar('\n');
        return (0);
}
