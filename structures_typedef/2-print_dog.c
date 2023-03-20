#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - print a struct dog
 * @d: input parameter for struct dog
 * Return: no need
 */
void print_dog(struct dog *d)
{
	char empty[5] = "(nil)";

	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = empty;
		if (d->owner == NULL)
			d->owner = empty;
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
