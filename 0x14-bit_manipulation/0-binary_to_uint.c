#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number passed
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convertedValue = 0;
	int i;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}

		convertedValue = 2 * convertedValue + (b[i] - '0');
	}

	return (convertedValue);
}
