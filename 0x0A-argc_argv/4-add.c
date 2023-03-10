#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0) for success (1) for failure
 */

int main(int argc, char *argv[])
{
int count;
int str_to_int;
int sum = 0;

count = 1;

while (count < argc)
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]);
sum += str_to_int;
}

else
{
printf("Error\n");
return (1);
count++;
}
printf("%d\n", sum);
return (0);
}

/**
* check_num - check - string there are digit
* @str: array str
* Return: (0) for success
*/

int check_num(char *str)
{
unsigned int count;

count = 0;

while (count < strlen(str))
{
if (!isdigit(str[count]))
{
return (0);
}
count++;
}
return (1);
}

