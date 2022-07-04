#include "dog.h"

/** 
 * free_dog - Entry point
 * 
 * @d: dog to be freed
 * 
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
