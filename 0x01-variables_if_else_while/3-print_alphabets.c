#include <stdio.h>
/**
 * main - Entry point
 * Task 3. alphABET
 * copyright 2022 © baccrie
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Declaring variables for upper and lower case */
	char lowerCase;
	char upperCase;

	/* Assigning characters to the variaes */
	lowerCase = 'a';
	/* while loop for lowercase */
	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		++lowerCase;
	}
	/* for loop for uppercase */
	for (upperCase = 'A'; upperCase <= 'Z'; ++upperCase)
	{
		putchar(upperCase);
	}
	putchar('\n');
	return (0);
	/* copyright © 2022 baccrie all right reserved */
}
