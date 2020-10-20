#include "dog.h"
/**
 * init_dog - initializes a instace of struct 'dog'
 * @d: instance to be initialized
 * @name: name of the dog
 * @age: age to set for this dog instance
 * @owner: specifying the owner of a dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
