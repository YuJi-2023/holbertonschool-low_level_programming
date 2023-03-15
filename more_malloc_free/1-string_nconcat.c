#include "main.h"
#include <stdlib.h>
/**
 * _strlen - get the length of string
 *@str: input string
 *Return: the length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i = i + 1;
	return (i);
}
/**
 * string_nconcat - concatenate two string of n char
 * @s1: input string1
 * @s2: input string2
 * @n: nubmer of char in s2 need to be concatenated
 * Return: pointer to newly allocated  memory or NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > _strlen(s2))
		n = _strlen(s2);
	result = malloc(sizeof(*result) * (_strlen(s1) + n + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	if (n == 0)
	{
		while (*s1 != '\0')
		{
			result[i] = *s1;
			i = i + 1;
			s1 = s1 + 1;
		}
		return (result);
	}
	i = 0;
	while (*s1 != '\0')
	{
		result[i] = *s1;
		i = i + 1;
		s1 = s1 + 1;
	}
	while (*s2 != '\0' && i <= (_strlen(s1) + n + 4))
	{
		result[i] = *s2;
		i = i + 1;
		s2 = s2 + 1;
	}
	result[i] = '\0';
	return (result);
}
