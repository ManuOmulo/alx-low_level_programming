#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: parameter to be printed
 * Return: (1) if lowercase and (0) otherwise
 */

int _islower(int c)
{
int var;
if (c >= 97 && c <= 122)
{
var = 1;
return (var);
}
else
{
var = 0;
return (var);
}
}
