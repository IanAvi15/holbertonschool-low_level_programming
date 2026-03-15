#include "main.h"

/**
 * _sqrt_helper - recursive helper to find natural square root
 * @n: number to find the square root of
 * @i: current guess
 *
 * Return: square root of n, or -1 if not found
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);        /* No natural square root exists */
	if (i * i == n)
		return (i);         /* Found the square root */

	return (_sqrt_helper(n, i + 1));  /* Try next integer */
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);        /* Negative numbers have no natural square root */

	return (_sqrt_helper(n, 0));  /* Start guessing from 0 */
}
