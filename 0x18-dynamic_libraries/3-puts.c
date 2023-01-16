#include "main.h"

/**
 * _puts - Print out a string to stdout
 * @str: The string
 *
 * Description: Print out a string to stdout
 *
 * Return: void (Succes)
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
