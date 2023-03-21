#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - a function that executes a function given as a
 * parameter on each element of an array
 * @array: pointer to an array parameter
 * @size: size of the input array
 * @action: function pointer
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	i = 0;
	while (i < size)
	{
	(*action)(array[i]);
	i = i + 1;
	}
}
