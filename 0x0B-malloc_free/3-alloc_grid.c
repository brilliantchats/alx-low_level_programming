#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Create a 2 dimensional array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the array or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		array = NULL;
	else
	{
		array = (int **)malloc(height * sizeof(int *));
		if (array != NULL)
		{
			for (i = 0; i < height; i++)
				array[i] = (int *)malloc(width * sizeof(int));
			for (i = 0; i < height; i++)
			{
				if (array[i] != NULL)
				{
					for (j = 0; j < width; j++)
						array[i][j] = 0;
				}
				else
				{
					free(array[i]);
				}
			}
		}
		else
		{
			free(array);
		}
	}
	return (array);
}
