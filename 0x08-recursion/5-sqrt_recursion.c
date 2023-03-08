#include "main.h"
int calculate_sqrt(int n, int i);

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: number to square root
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)

		return (-1);

	return (calculate_sqrt(n, 0));
}


/**
 * calculate_sqrt - finds the natural square root of a number
 * @num: number to square root
 * @i: iterator
 * Return: the resulting square root
 */

int calculate_sqrt(int num, int i)
{
	if (i * i > num)
		return (-1);

	if (i * i == num)
		return (i);

	return (calculate_sqrt(num, i + 1));
}
