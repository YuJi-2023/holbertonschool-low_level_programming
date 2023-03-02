#include "main.h"
/**
 * _strncpy - copy the string pointed to by src to dest--with at most n bytes
 * @dest: the input dest pointer
 * @src: the input src pointer
 * @n: the number to by copied
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (src[len] != '\0')
	{
		len = len + 1;
	}
	while (src[i] != '\0' && n - 1 >= i)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	if (len < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
