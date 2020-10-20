#ifndef __DOG_H__
#define __DOG_H__
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - key info aout a dog
 * @name: na me of the dog
 * @age: the age of the dog
 * @owner: the dog's servant
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*Initializes a variable of type struct dog*/
void init_dog(struct dog *d, char *name, float age, char *owner);
/*Prints a struct of dog*/
void print_dog(struct dog *d);
/*anohter name ofr struc dog */
typedef struct dog dog_t;
#endif

