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
	if (str == NULL)
		array = NULL;
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			len++;
		}
		array = malloc(len + 1);
	}
	if (array != NULL && str != NULL)
	{
		for (i = 0; i <= len; i++)
		{
			array[i] = str[i];
		}
	}
	return (array);
}
