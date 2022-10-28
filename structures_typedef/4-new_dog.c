#include "dog.h"
/**
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nname = NULL;
	char *nowner = NULL;

	nname = malloc(strlen(name) + 1);
	if (!nname)
		return (nname);
	nowner = malloc(strlen(owner) + 1);
	if (!nowner)
		return (nowner);
	name->name = nname;
	age->age = age;
	owner->owner = nowner;
}
