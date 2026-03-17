#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog_t structure
 * @d: pointer to the dog to free
 *
 * Description: Frees the memory allocated for name and owner,
 * then frees the dog structure itself. Does nothing if d is NULL.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
