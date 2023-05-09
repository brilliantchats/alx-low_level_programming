#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_algo - the actual recursive binary algorithm
 * @array: pointer to the first element of the array
 * @value: the value to look for
 * @start: the index of the first element of the array
 * @end: the index of the last element of the array
 *
 * Return: index of value, -1 otherwise
 */
int binary_algo(int *array, int value, size_t start, size_t end)
{
	int mid;
	size_t i;

	if (start <= end)
	{
		mid = (end - start) / 2 + start;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i != end)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (value > array[mid])
			return (binary_algo(array, value, mid + 1, end));
		if (value < array[mid])
			return (binary_algo(array, value, start, mid - 1));
		return (mid);
	}
	return (-1);
}
/**
 * binary_search - Implementation of binary search
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: index of the value to search for, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_algo(array, value, 0, size - 1));
}
