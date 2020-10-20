#include "dog.h"
/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of the string str.
 * @str: string to duplicate
 *
 * Return: On success, the _strdup function returns a pointer to the duplicated
 * string. It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int len;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	dup = malloc((sizeof(char) * len) + 1);
	if (dup == NULL)
		return (NULL);

	while (len >= 0)
	{
		dup[len] = str[len];
		len--;
	}

	return (dup);
}
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

/**
 * new_dog - creates a new dog, makes the malloc requesta dn handles
 * initialization
 * @name: name for the dog
 * @age: age of the dog
 * @owner: name of the dog's servant
 *
 * Return: NULL if the function fails, pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t = d;

	d = malloc(sizeof(struct dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _strdup(name);
	d->owner = _strdup(owner);

	if (d->name == NULL or d->owner == NULL)
		free_dog(d);

	return (d);
