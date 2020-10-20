#include "dog.h"
/**
 * free_dog -frees the memory associated with an instance of type struct dog
 * @d: dog to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}

