#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocate memory using malloc
 * @b: size of the allocated memory
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *array;

	array = malloc(b);
	if (array == NULL)
		exit(98);
	return (array);
}
