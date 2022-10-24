#include "main.h"

/**
 * puts2 - Print evry other character
 * @str: The string
 *
 * Description: Print evry other character starting with the first one
 *
 * Return: void (Success)
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
