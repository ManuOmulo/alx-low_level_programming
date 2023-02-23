#include "main.h"

/**
 * main - the fizzbuzz test
 * Return: (0) is success
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz");
}
else if (1 % 5 == 0 && i % 3 != 0)
{
printf("Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
prinf("FizzBuzz";
}
else if (i == 1)
{
print("%d ", i);
}
else
{
printf("%d ", i);
}
}
printf('\n');
return (0);
}
