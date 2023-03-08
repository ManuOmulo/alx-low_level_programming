#include "main.h"
int calculate_prime(int n, int i);

/**
 * is_prime_number - returns 1 if is a prime number otherwise return 0
 * @n: integer to check
 * Return: (1) if interger (0) if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (calculate_prime(n, n - 1));
}


/**
 * calculate_prime - calculates if a number is prime
 * @num: number to evaluate
 * @i: iterator
 * Return: (1) if prime, (0) if not
 */

int calculate_prime(int num, int i)
{
	if (i == 1)
		return (1);

	if (num % i == 0 && i > 0)
		return (0);

	return (calculate_prime(num, i - 1));
}

