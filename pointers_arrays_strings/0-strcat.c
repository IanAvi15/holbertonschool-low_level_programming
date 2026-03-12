#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string (must have enough space)
 * @src: source string to append
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* find end of dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* copy src into dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* add final null byte */
	dest[i] = '\0';

	return (dest);
}
