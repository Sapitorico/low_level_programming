#include "dog.h"
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

	NEW_dog =  malloc(sizeof(char) * strlen(name) + 1);
	if (NEW_dog)
	{
		NEW_dog->name = malloc(sizeof(char) * strlen(owner) + 1);
		if (NEW_dog->name)
		{
			NEW_dog->name = strcpy(NEW_dog->name, name);
			NEW_dog->owner = malloc(sizeof(owner));
			if (NEW_dog->owner)
			{
				NEW_dog->owner = strcpy(NEW_dog->owner, owner);
				NEW_dog->age = age;
				return (NEW_dog);
			}
			free(NEW_dog->name);
			free(NEW_dog);
			return (NULL);
		}
		free(NEW_dog);
		return (NULL);
	}
	return (NULL);
}
