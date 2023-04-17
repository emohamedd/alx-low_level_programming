#ifndef  DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/* By EMOHAMEDD */

/**
 *struct dog - Description
 *@name: dog's name
 *@age: dog's
 *@owner: the owner
 *
 *Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
