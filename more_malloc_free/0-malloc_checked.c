#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: input size of memory need to be allocated
 * Return: pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;
	unsigned int n;

	n = b;
	mem = malloc(n);
	if (mem == NULL)
	{
		return (NULL);
		_putchar(98);
	}
	return (mem);
	free(mem);
}
