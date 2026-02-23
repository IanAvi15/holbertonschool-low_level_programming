#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int start, i;

	/* Find the length of the string */
	while (str[len] != '\0')
		len++;

	/* Determine starting index for printing */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	/* Print the second half of the string */
	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
