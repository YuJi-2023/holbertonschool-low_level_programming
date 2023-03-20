#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free malloced memory for new_dog
 * @d: input parameter for new_dog created
 * Return: no need
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
