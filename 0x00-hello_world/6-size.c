#include <stdio.h>
/**
 * Description: main - prints the size of various types on the computer it is compiled and run on.
 * Return: 0 for success
 */
int main(void)
{
printf("Size of a char: %c", sizeof(char));
printf("Size of an int: %d", sizeof(int));
printf("Size of a long int: %ld", sizeof(long int));
printf("Size of a long long int: %lld", sizeof(long long int));
printf("Size of a float: %f", sizeof(float));
return (0);
}

