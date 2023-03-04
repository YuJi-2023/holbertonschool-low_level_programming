#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: point to the memory area
 * @b: constant
 * @n: number of bytes in the memory need to be filled
 * Return: the pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i = i + 1;
	}
	return (p);
}
