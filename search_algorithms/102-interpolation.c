#include "search_algos.h"
/**
  *cal_pos-calculate pos
  *@low: low
  *@high: hihg
  *Return: pos
  */
size_t cal_pos(int *array, int value, size_t low, size_t high)
{
	size_t pos;

	pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
	return (pos);
}

/**
  *interpolation_search-search for a value in array of ints using interpolation
  *@array: the input array to be searched
  *@size: number of elements in the array
  *@value: int to be located
  *Return: index number of the int that been located, or -1 if not found
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t pos;

	if (array == NULL)
	{
		return (-1);
	}
	low = 0;
	high = size - 1;
	pos = cal_pos(array, value, low, high);
	if (pos >= size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
	}
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = cal_pos(array, value, low, high);
		printf("Value checked array[%ld] = [%u]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}
	return (-1);
}
