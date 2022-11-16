#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - Passing array elems through the params passed
 * @array: the array
 * @size: size of the array
 * @cmp:the function passed as a parameter
 *
 * Return: index of the first integer which passes cmp, -1 fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
