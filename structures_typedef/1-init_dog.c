#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize the datas for the dog
 * @d: struct name
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: no need
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
