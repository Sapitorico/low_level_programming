#include "dog.h"
/**
 * free_dog - frees a fucking dogs
 * @d: pointer to the struct dog
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
