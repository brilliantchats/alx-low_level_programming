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
	int i;

	array = malloc(size);
	if (array != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	else if (size == 0)
		array = NULL;
	return (array);
}
