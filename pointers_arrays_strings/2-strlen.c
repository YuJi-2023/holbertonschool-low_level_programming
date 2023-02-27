#include "main.h"
/**
 * _strlen - check and return the length of a string
 * @s: input parameter of a char-typed pointer, holding the address
 * Return: length of the string
 */
int _strlen(char *s)/* s is a pointer to a char*/
{
	int n = 0;

	while (*s != '\0')
	{
		s = s + 1;
		n = n + 1;
	}
	return (n);
}
