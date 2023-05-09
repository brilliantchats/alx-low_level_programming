#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * interpolation_search - Implementation of interpolation search
 * @array: the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the index of the searched element, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, high = size - 1, low = 0;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])
					) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n",
					pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
		{
			high = pos - 1;
		}
		else if (array[pos] < value)
			low = pos + 1;
	}
	return (-1);
}
