#include <stdio.h>
/**
 * Description: main - prints the size of various types on the computer it is compiled and run on.
 * Return: 0 for success
 */
int main(void)
{
	char x;
	int a;
	long int b;
	long long int c;
	float d;
printf("Size of a char: %c byte(s)\n", sizeof(x));
printf("Size of an int: %d byte(s)\n", sizeof(a));
printf("Size of a long int: %ld byte(s)\n", sizeof(b));
printf("Size of a long long int: %lld byte(s)\n", sizeof(c));
printf("Size of a float: %f byte(s)", sizeof(d));
return (0);
}

