#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			putchar(i == 8 && j == 9 ? '\n' : ',');
			if (!(i == 8 && j == 9))
				putchar(' ');
		}
	}

	return (0);
}
