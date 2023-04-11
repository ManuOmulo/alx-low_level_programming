#include "main.h"

/**
 * print_binary - converts long integer to binary
 * @n: number to convert to binary
 */

void print_binary(unsigned long int n)
{
int i;
unsigned long int currentValue;
int count = 0;

for (i = 63; i >= 0; i--)
{
currentValue = n >> i;

if (currentValue & 1)
{
_putchar('1');
count++;
}

else if (count)
{
_putchar('0');
}
}

if (!count)
{
_putchar('0');
}
}

