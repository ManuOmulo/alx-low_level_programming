#include "main.h"

/**
 * void times_table - prints the 9 times table, starting with 0
 * Return: (0) is success
 */

void times_table(void)
{
int i;
int j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
_putchar(i * j + '0');
}
_putchar('\n');
}
}
