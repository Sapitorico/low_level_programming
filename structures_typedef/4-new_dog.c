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
		return (NULL);
	NEW_dog->name = malloc(sizeof(name));
	if (!NEW_dog->name)
	{
		free(NEW_dog);
		return (NULL);
	}
	strcpy(NEW_dog->name, name);
	NEW_dog->age = age;
	NEW_dog->owner = malloc(sizeof(owner));
	if (!NEW_dog->owner)
	{
		free(NEW_dog->name);
		free(NEW_dog);
		return (NULL);
	}
	strcpy(NEW_dog->owner, owner);
	return (NEW_dog);
}
