#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0) for success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}