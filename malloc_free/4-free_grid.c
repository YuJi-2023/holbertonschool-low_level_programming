#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 *@grid: input 2d array
 *@height: row number of the 2d array
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
	{
		return;
	}
	if (grid == NULL)
	{
		return;
	}
	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i = i + 1;
	}
	free(grid);
}
