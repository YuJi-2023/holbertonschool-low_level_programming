#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * and initialise it with a certain char
 * @size: takes the input size
 * @c: takes the input char
 * Return: NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * 1);
	int n;

	n = 0;
	if (arr == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		while (n < size)
		{
			arr[n] = c;
			n = n + 1;
		}
	}
	return (arr);
}
