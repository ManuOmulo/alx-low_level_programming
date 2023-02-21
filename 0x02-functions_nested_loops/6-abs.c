#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: parameter to be checked
 * Return: the absolute value of input
 *
 */

int _abs(int n)
{
if (n < 0)
{
n = -(n);
}
else if (n >= 0)
{
n = n;
}
else
{
return (n);
}
}
