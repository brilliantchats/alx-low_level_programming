#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array-iterator - Execute function given as a param on array elems
 * @array: the array
 * @size: size of the array
 * @action: the function passed as an argument
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (size > 0 && array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
