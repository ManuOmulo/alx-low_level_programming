#include "main.h"

/*
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index where bit is
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int valueOfBit;

	if (index > 63)
	{
		return (-1);
	}

	valueOfBit = (n >> index) & 1;

	return (valueOfBit);
}
