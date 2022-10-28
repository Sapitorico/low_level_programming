#ifndef DOG_H
#define DOG_H
/*libreires*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*structures*/

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

/*prototypes*/

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
#endif
