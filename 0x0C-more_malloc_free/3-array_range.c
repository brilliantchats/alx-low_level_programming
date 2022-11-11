#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Create an array
 * @min: minimum value in array
 * @max: maximum value in array
 *
 * Return: pointer to array or null
 */
int *array_range(int min, int max)
{
	int i, j, len;
	int *arr;

	j = 0;
	if (max < 0)
		len = -(max - min + 1);
	else
		len = max - min + 1;
	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}
	return (arr);
}
