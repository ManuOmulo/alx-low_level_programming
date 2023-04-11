#include "main.h"

/**
 * set_bit - sets the bit at given index to 1
 * @n: pointer to number
 * @index: index of bit
 * Return: (1)success (-1) for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}

*n = ((1UL << index) | *n);

return (1);
}

