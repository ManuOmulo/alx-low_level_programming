#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: (0) for big or (1) for little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *variable = (char *) &i;

	return (*variable);
}
