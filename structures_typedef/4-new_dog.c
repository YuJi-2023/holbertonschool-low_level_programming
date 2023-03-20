#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - copy string to a newly allocated memory
 * @str: takes the input string
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *s = str;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		i = i + 1;
	}

	dup = malloc((i + 1) * 1);
	i = 0;
	if (dup == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		dup[j] = s[i];
		i = i + 1;
		j = j + 1;
	}
	dup[j] = '\0';
	return (dup);
}

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
	char *namecopy;
	char *ownercopy;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	namecopy = malloc(sizeof(_strdup(name)));
	if (namecopy == NULL)
	{
		free(namecopy);
		free(new_dog);
		return (NULL);
	}
	namecopy = _strdup(name);
	ownercopy = malloc(sizeof(_strdup(owner)));
	if (ownercopy == NULL)
	{
		free(ownercopy);
		free(namecopy);
		free(new_dog);
		return (NULL);
	}
	ownercopy = _strdup(owner);

	new_dog->name = namecopy;
	new_dog->age = age;
	new_dog->owner = ownercopy;
	return (new_dog);
}
