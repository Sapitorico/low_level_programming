#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
