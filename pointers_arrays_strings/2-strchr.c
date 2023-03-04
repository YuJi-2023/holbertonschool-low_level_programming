#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: input parameter of a char-typed pointer
 * @c: the character to be located
 * Return: a pointer to the first occurrence of char c or null if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i = i + 1;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
