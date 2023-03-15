#include "main.h"
#include <stdlib.h>
/**
 * _calloc - using malloc to create own calloc funtion
 *@nmemb: input number of elements of the array
 *@size: input of each element's byte size
 *Return: pointer to allocated memory or NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL || nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i = i + 1;
	}
	return (ptr);
}
