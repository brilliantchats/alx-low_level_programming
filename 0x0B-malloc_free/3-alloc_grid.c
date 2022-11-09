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
		return (NULL);
	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	if (array != NULL)
	{
		for (i = 0; i < height; i++)
			array[i] = (int *)malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				array[i][j] = 0;
		}
		return (array);
	}
}
