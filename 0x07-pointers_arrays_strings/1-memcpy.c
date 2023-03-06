#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: destination to copy to
 * @src: destination to copy from
 * @n: number of bytes to copy
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}

return (dest);
}

