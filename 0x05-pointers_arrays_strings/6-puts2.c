#include "main.h"

/**
 * puts2 - prints every other character of a string, starting 
 * with the first character
 * @str: parameter to be modified
 * Return: void
 */

void puts2(char *str)
{
int count = 0;
int t = 0;
char *ch = str;
int i;

while (*ch != '\0')
{
ch++;
count++;
}
t = count - 1;
for (i = 0 ; i <= t ; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}

