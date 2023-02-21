#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *			in lowercase
 * Return: (0) is success
 */

void print_alphabet_x10(void)
{
char ch;
int i;

while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
i++;
_putchar('\n');
}
}

