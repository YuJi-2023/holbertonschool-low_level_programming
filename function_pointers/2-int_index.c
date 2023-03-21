#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - a function that search the first matching integer and
 * returns its index from an input int array
 * @array: pointer to an array parameter
 * @size: size of the input array
 * @cmp: function poiter that takes the input function
 * Return: index to the array element that matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	i = 0;
	if (size > 0)
	{
		while (i < size)
		{
			if ((*cmp)(array[i]) != 0)
			{
				return (i);
			}
			i = i + 1;
		}
		return (-1);
	}
	return (-1);
}
