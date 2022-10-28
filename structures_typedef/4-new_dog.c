#include "dog.h"
#include "1-init_dog.c"
/**
 * new_dog - creates a new struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: returnt to pinter a new strcut dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *NEW_dog;

	NEW_dog =  malloc(sizeof(dog_t));
	if (!NEW_dog)
	{
		return (NULL);
	}
	if (!name)
	{
		free(NEW_dog);
		free(name);
	}
	if (!owner)
	{
		free(owner);
	}
	init_dog(NEW_dog, name, age, owner);
	return (NEW_dog);
}
