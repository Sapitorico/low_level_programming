#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct dog - structure of the damn dog
 *
 * @name: name to dog
 * @age: age to dog
 * @owner: owner to dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
#endif
