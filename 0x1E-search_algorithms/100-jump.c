#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - Implement jump search algorithm
 * @array: the array to search the value in
 * @size: number of elements in the array
 * @value: the value to search for in the array
 *
 * Return: the index of the given value, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, step;
	char *str = "Value found between indexes [%ld] and [%ld]\n";

	if (array == NULL)
		return (-1);
	step = sqrt(size);
	for (i = 0; i < size; i += step)
	{
		if (array[i] < value)
		{
			printf("Value checked array[%ld] = [%d]\n",
					i, array[i]);
			if (i == size - 1)
			{
				printf(str, i, i + step);
				printf("Value checked array[%ld] = [%d]\n",
						i, array[i]);
			}
		}
		else if (array[i] >= value)
		{
			printf(str, i - step, i);
			for (j = i - step; j <= i; j++)
			{
				printf("Value checked array[%ld] = [%d]\n",
						j, array[j]);
				if (array[j] == value)
					return (j);
			}
			return (-1);
		}
	}
	return (-1);
}
