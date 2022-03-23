#include "main.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Debugging Task 2
* Copyright © 2022 baccrie
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int largest; /* Declare integer for the largest num */

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
