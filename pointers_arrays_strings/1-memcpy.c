#include "main.h"
/**
 * _memcpy - cop n bytes from src memory area to dest memory area
 * @dest: the input dest pointer
 * @src: the input src pointer
 * @n: the number to by copied
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *p = dest;
	char *q = src;

	while (n > i)
	{
		p[i] = q[i];
		i = i + 1;
	}
	return (p);
}
