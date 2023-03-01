#include "main.h"
/**
 * _strcat - concaternate two strings, append src to dest
 * @dest: the input dest pointer
 * @src: the input src pointer
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len = len + 1;
	}
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i = i + 1;
		len = len + 1;
	}
	dest[len] = '\0';
	return (dest);
}
