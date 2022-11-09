#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concantenate two strings using malloc
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to new string or null
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len_1, len_2;
	char *array;

	len_1 = 0;
	len_2 = 0;
	j = 0;

	if (s1 == NULL)
		len_1 = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			len_1++;
	}
	if (s2 == NULL)
		len_2 = 0;
	else
	{
		for (i = 0; s[i] != '\0'; i++)
			len_2++;
	}
	array = malloc(len_1 + len_2 + 1);
	if (array != NULL)
	{
		for (i = 0; i < len_1; i++)
			array[i] = s1[i];
		for (i = len_1; i <= len_2 + len_1; i++)
		{
			array[i] = s2[j];
			j++;
		}
	}
	return (array);
}
