#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + 48);
	for (i = 0; i < 6; i++)
		putchar(i + 97);
	putchar('\n');

	return (0);
}
