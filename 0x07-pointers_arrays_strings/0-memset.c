#include "main.h"

/**
 * *_memset -  fills memory with a constant byte.
 * @s: pointer to memory
 * @b: byte to be filled
 * @n: number of bytes in memory to fill
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *mem = s;
	unsigned char val = b;

	for (i=0; i < n; i++) {
		mem[i] = val;
	}

	return (mem);
}

