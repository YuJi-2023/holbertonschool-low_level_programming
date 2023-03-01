#include "main.h"
/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: the input dest pointer
 * @src: the input src pointer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
