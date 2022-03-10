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
printf("Size of a char: %c byte(s)", sizeof(charac));
printf("Size of a int:  %d byte(s)", sizeof(integ));
printf("Size of a long int: %d byte(s)", sizeof(lon));
printf("Size of a long long int: %d byte(s)", sizeof(longg));
printf("Size of a float: %f byte(s)", sizeof(floa));
return (0);
}
