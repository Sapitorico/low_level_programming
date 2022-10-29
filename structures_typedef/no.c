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
	dog_t *dog;

	dog =  malloc(sizeof(dog_t));
	if (dog)
	{
		dog->name = malloc(sizeof(char) * (strlen(owner) + 1));
		if (dog->name)
		{
			dog->name = strcpy(dog->name, name);
			dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
			if (dog->owner)
			{
				dog->owner = strcpy(dog->owner, owner);
				dog->age = age;
				return (dog);
			}
			free(dog->name);
			free(dog);
			return (NULL);
		}
		free(dog);
		return (NULL);
	}
	free(dog);
	return (NULL);
}
