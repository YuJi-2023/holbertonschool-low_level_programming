#include "main.h"
/**
 * _strncat - concaternate two strings, append src, at most n bytes, to dest
 * @dest: the input dest pointer
 * @src: the input src pointer
 * @n: the number of bytes to be appended to dest from src
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int slen = 0;

	while (dest[dlen] != '\0')
	{
		dlen = dlen + 1;
	}
	while (src[slen] != '\0' && n - 1 >= slen)
	{
		dest[dlen] = src[slen];
		slen = slen + 1;
		dlen = dlen + 1;
	}
	dest[dlen] = '\0';
	return (dest);
}
