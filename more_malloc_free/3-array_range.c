#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of int, value from min to max
 *@min: input number
 *@max: input number
 *Return: pointer to the created array or NULL if fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(*arr));
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		min = min + 1;
		i = i + 1;
	}
	return (arr);
}
