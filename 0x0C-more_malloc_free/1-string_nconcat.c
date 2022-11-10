#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_len - length of string
 * @s: string
 *
 * Return: length of string
 */
unsigned int str_len(char *s)
{
	unsigned int len, i;
	
	len = 0;
	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			len++;
	}
	return (len);
}
/**
 * string_nconcat - Concantenate 2 strings with string 2 going up to n
 * @s1: first string
 * @s2: second string
 * @n: copy s2 up till n
 *
 * Return: pointer to new string or NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2, loop2;
	char *new_str;

	j = 0;
	len1 = str_len(s1);
	len2 = str_len(s2);
	if (n < len2)
		new_str = malloc(sizeof(char) * (len1 + n + 1));
	else
		new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new_str == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
			new_str[i] = s1[i];
	}
	if (s2 != NULL)
	{
		if (n < len2)
			loop2 = n + 1;
		else
			loop2 = len2 + 1;
		for (i = len1; i < loop2 + len1; i++)
		{
			if (i == (loop2 + len1 - 1))
				new_str[i] = '\0';
			else
				new_str[i] = s2[j];
			j++;
		}
	}
	else
		new_str[len1] = '\0';
	return (new_str);
}
