#include "main.h"

/**
 * flip_bits - returns the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i;
unsigned long int currentValue;
unsigned long int a = n ^ m;
int count = 0;

for (i = 63; i >= 0; i--)
{
currentValue = a >> i;

if (currentValue & 1)
{
count++;
}
}

return (count);
}

