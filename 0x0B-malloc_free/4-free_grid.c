#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free up memory used by a 2D array
 * @grid: the 2D array
 * @height: heigth of the array
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
