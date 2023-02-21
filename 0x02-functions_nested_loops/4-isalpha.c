#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: parameter to be checked
 * Return: (1) if is letter, lowercase or uppercase
 *		otherwise return (0)
 */

int _isalpha(int c)
{
int var;
if (c >= 65 && c <= 90)
{
var = 1;
return (var);
}
else if (c >= 97 && c <= 122)
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

