#include "dog.h"
#include "strcpy.c"
#include "strlen.c"
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
	dog_t *dog = NULL;

	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		free(dog);
		return (dog);
	}
	dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (!dog->name)
	{
		free(dog);
		return (dog);
	}
	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (dog);
	}
	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);
	return (dog);
}
