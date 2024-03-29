#include "dog.h"
/**
 * init_dog - variable of type struct dog
 *
 * @d: pointer to the struct dog
 * @name: pointer to the name dog
 * @age: age dog
 * @owner: pointer to the owner dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)	/*return void if d is NULL*/
		return;
	/*initializes the elements of the structure, dereference*/
	d->name = name;
	d->age = age;
	d->owner = owner;
}
