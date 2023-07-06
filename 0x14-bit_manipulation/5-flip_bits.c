#include "main.h"

/**
 * flip_bits - returns the number of bits needed to be flipped
 * @n: first
 * @m: second
 * Return: value of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int running;
	unsigned long int XOR = n ^ m;
	int i;
	int counter = 0;

	for (i = 63; i >= 0; i--)
	{
		running = XOR >> i;
		if (running & 1)
		{
			counter++;
		}
	}

	return (counter);
}
