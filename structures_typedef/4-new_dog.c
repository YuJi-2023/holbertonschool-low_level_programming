#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dot_t/struct dog
 * @name: input parameter dog name
 * @age: input dog age
 * @owner: input dog owner
 * Return: dog_t(a struct dog type)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
