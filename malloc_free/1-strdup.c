#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
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
