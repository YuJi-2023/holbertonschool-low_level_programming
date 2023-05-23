#include "search_algos.h"
#include <math.h>
/**
  *jump_search-search for a value in an array of ints using jump search
  *@array: the input array to be searched
  *@size: number of elements in the array
  *@value: int to be located
  *Return: index number of the int that been located, or -1 if not found
  */
int jump_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	low = 0;
	high = sqrt(size);
	printf("Value checked array[%lu] = [%d]\n", low, array[low]);
	while (array[high] < value && high < size)
	{
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);
		low = high;
		high = high + sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	i = low;
	if (high >= size)
	{
		high = size - 1;
	}
	while (i <= high && high < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i = i + 1;
	}
	return (-1);
}
