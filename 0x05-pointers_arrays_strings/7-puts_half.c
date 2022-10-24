#include "main.h"

/**
 * puts_half - Print half a string
 * @str: The string
 *
 * Description: Print the last half of a string
 *
 * Return: void (Success)
 *
 */
void puts_half(char *str)
{
	int i, index, j;
	int str_len = 0;

	for (i = 0; i < *(str + i) != '\0'; i++)
	{
		str_len++;
	}
	if (str_len % 2 == 0)
	{
		index = str_len / 2;
	}
	else
	{
		index = (str_len / 2) + 1;
	}
	for (j = index; j < str_len; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
