#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number
 *
 * Return: factorial of n, -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);        /* Error for negative numbers */
	if (n == 0)
		return (1);         /* Base case: 0! = 1 */

	return (n * factorial(n - 1));  /* Recursive case */
}
