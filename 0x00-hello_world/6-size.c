#include <stdio.h>
/**
 * Description: main - prints the size of various types on the computer
 * Return: 0 for success
 */
int main(void)
{
	char x;
	int a;
	long int b;
	long long int c;
	float d;
printf("Size of a char: %lu byte(s)\n",(unsigned long) sizeof(x));
printf("Size of an int: %lu byte(s)\n",(unsigned long) sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)",(unsigned long) sizeof(d));
return (0);
}

