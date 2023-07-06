#include "main.h"

/*
 * print_binary - print the binary representation of given number
 * @n: decimal value to convert
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int runningValue;
	int i;
	int counter = 0;

	for (i = 63; i >= 0; i--)
	{
		runningValue = n >> i;

		if (runningValue & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
