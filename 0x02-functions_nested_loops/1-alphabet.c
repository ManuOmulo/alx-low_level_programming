#include "main.h"

/**
 * Description: main - write alphabet in lowercase
 * Return: (0) is success
 */

int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void)
{
char ch;
for (char = "a"; char <= "z"; ch++)
{
_putchar(ch);
}
_putchar('\n');
}

