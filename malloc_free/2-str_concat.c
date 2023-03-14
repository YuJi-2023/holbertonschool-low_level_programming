#include "main.h"
#include <stdlib.h>
/**
 * _strlen - get the length of string
 *@str: input string
 *Return: the length of the string
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: takes the input string1
 * @s2: takes the input string2 that to be concatenated to s1
 * Return: NULL on failure and a pointer to concatenaed string
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *result;

	result = malloc(sizeof(*result) * (_strlen(s1) + _strlen(s2) + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (*s1 != '\0')
	{
		result[i] = *s1;
		i = i + 1;
		s1 = s1 + 1;
	}
	while (*s2 != '\0')
	{
		result[i] = *s2;
		i = i + 1;
		s2 = s2 + 1;
	}
	result[i] = '\0';
	return (result);
}
