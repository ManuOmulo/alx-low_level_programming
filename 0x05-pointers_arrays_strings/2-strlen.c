#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: parameter to be checked
 * Return: length of parameter s
 */

int _strlen(char *s)
{
int count = 0;

while (*s != '\0')
{
count++;
s++;
}

return (count);
}
