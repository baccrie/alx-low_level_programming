#include "main.h"
/**
 * _isalpha - Returns 1 if c is a letter
 * lowercase or uppercase
 * otherwise returns 0
 * Copyright 2022 © baccrie
 *
 * Return: Returns 0 otherwise
 */
int _isalpha(int c)

{

if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}

else
{
return (0);
}

}
