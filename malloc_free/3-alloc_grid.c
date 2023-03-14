#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2d array of integers
 * and initialise with 0
 * @width: the number of row
 * @height: the nunber of column
 * Return: NULL if either row or column is 0 or pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **result;
	int i;
	int j;
	int num;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	result = malloc(sizeof(int *) * height);

	if (result == NULL)
	{
		return (NULL);
	}

	i = 0;
	num = 0;
	while (i < height)
	{
		result[i] = malloc(sizeof(int) * width);
		if (result[i] == NULL)
		{
			while (num < i)
			{
				free(result[num]);
				num = num + 1;
			}
			free(result);
		}
		i = i + 1;
	}
	i = 0;
	j = 0;
	while (i < height)
	{
		while (j < width)
		{
			result[i][j] = 0;
			j = j + 1;
		}
		j = 0;
		i = i + 1;
	}
	return (result);
}
