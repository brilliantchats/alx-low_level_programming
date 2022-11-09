#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a given string using malloc
 * @str: the string
 *
 * Return: pointer to the duplicate, otherwise null
 */
char *_strdup(char *str)
{
	char *array;
	int i, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (str != NULL)
		array = NULL;
	else
		array = malloc(len + 1);
	if (array != NULL && str != NULL)
	{
		for (i = 0; i <= len; i++)
		{
			array[i] = str[i];
		}
	}
	else
		array = NULL;
	return (array);
}
