#include <stdio.h>
/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charac;
int integ;
long int lon;
long long int longg;
float floa;
printf("Size of a char: %c byte(s)\n", sizeof(charac));
printf("Size of a int:  %d byte(s)\n", sizeof(integ));
printf("Size of a long int: %d byte(s)\n", sizeof(lon));
printf("Size of a long long int: %d byte(s\n)", sizeof(longg));
printf("Size of a float: %f byte(s\n)", sizeof(floa));
return (0);
}
