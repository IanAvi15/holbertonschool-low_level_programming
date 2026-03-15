#include "main.h"

/**
 * _is_prime_helper - checks recursively if n is divisible by any number
 * @n: number to check
 * @i: current divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);            /* No divisors found, n is prime */
	if (n % i == 0)
		return (0);            /* Divisible by i, not prime */

	return (_is_prime_helper(n, i + 1)); /* Check next divisor */
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);            /* Numbers <= 1 are not prime */

	return (_is_prime_helper(n, 2)); /* Start checking from 2 */
}
