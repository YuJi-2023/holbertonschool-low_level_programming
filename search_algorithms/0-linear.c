#include "search_algos.h"

/**
  *linear_search-search for a value in an array of ints using linerar search
  *@array: the input array to be searched
  *@size: number of elements in the array
  *@value: int to be located
  *Return: index number of the int that been located, or -1 if not found
  */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	index = 0;
	if (array == NULL)
	{
		return (-1);
	}
	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n",
				index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
		index = index + 1;
	}
	return (-1);
}
