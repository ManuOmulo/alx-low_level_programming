#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of executable
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0) for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

