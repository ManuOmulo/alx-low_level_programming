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
int i;

for (i=0; n > 0; i++)
{
s[i] = b;
n--;
}

return (s);
}

