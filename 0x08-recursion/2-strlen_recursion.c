#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to be checked
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (s[count] != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
	}

	return (count);
}

