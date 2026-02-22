#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		/* Print leading spaces */
		for (space = size - row; space > 0; space--)
			_putchar(' ');

		/* Print '#' characters */
		for (hash = 0; hash < row; hash++)
			_putchar('#');

		/* End the row */
		_putchar('\n');
	}
}
