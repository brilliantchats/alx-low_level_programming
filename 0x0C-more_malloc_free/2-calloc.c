#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - use malloc to emulate calloc
 * @nmemb: number of elements in array
 * @size: size in bytes of each element
 *
 * Return: pointer to array or null on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		array[i] = 0;
	return (array);
}
