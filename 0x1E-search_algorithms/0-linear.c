#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - Implements the linear search algorithm
 * @array: the pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: the first index where value is located, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
