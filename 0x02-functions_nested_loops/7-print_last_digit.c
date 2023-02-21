#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: parameter to be checked
 * Return: value of last digit in n
 */

int print_last_digit(int n)
{
int r;
r = n % 10;

if (n < 0)
{
r = -r;
}
_putchar(r + '0');
return (r);
}
