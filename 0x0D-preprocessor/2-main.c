#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 or 1
 */

#ifndef NAME
#define NAME __FILE__
#endif

int main()
{
	printf("%s\n", NAME);
	return (0);
}

