#include <stdlib.h>
#include "dog.h"

/**
 * _strcopy - copies a string from src to a newly allocated memory
 * @src: string to copy
 *
 * Return: pointer to the newly copied string, or NULL if malloc fails
 */
char *_strcopy(char *src)
{
	char *copy;
	int i, len;

	if (src == NULL)
		return (NULL);

	len = 0;
	while (src[len])
		len++;

	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = src[i];
	copy[i] = '\0';

	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (dog_t), or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _strcopy(name);
	if (name != NULL && d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = _strcopy(owner);
	if (owner != NULL && d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
