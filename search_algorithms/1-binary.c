#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @start: start point for printing
 * @end: end point for printing
 * Return: void
 */
void print_array(const int *array, size_t start, size_t end)
{
	size_t index;

	index = start;
	while (index <= end)
	{
		if (index > start)
		{
			printf(", ");
		}
	printf("%d", array[index]);
	index = index + 1;
	}
	printf("\n");
}

/**
  *binary_search-search for a value in an array of ints using binary search
  *@array: the input array to be searched
  *@size: number of elements in the array
  *@value: int to be located
  *Return: index number of the int that been located, or -1 if not found
  */
int binary_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t middle;

	low = 0;
	high = size - 1;
	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		printf("Searching in array: ");
		print_array(array, low, high);
		middle = (low + high) / 2;
		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] < value)
		{
			low = middle + 1;
		}
		else
		{
			high = middle - 1;
		}
	}
	return (-1);
}
