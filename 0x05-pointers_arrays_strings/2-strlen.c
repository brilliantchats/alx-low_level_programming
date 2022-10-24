#include "main.h"

/**
 * _strlen - Return lenth of a string
 * @s: The string
 *
 * Description: Take a given string, and return its length
 *
 * Return: length of string (Success)
 *
 */
int _strlen(char *s)
{
	int counter = 0;
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
