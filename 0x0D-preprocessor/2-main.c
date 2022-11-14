#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints out the name of the file
 *
 * Return: nothing
 */
int main(void)
{
	int i;
	char *str;

	str = __FILE__;
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
