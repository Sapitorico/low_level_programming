#include "dog.h"
/**
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		printf("(nil)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
