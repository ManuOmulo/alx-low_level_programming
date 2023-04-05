#include <stdio.h>

void displayFirst(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before main function is executed
 * Return: void
 */

void displayFirst(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

