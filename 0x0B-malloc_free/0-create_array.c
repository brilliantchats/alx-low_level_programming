#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an an array of characters using malloc
 * @size: size of the arrya
 * @c: the character
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(size);
	if (array != NULL && size != 0)
		array[0] = c;
	else if (size == 0)
		array = NULL;
	return (array);
}
