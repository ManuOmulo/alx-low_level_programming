#include "main.h"

/*
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: index to set
 * Return: (-1) for failure and (1) for success
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
