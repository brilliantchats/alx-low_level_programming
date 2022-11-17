#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _str_len - Find a string length
 * @s: the string
 *
 * Return: length of the string
 */
int _str_len(const char * const s)
{
	int j = 0, str_len = 0;

	while (s[j] != '\0')
	{
		str_len = str_len + 1;
		j++;
	}
	return (str_len);
}
/**
 * print_arg - Print the argument in... linked to by c
 * @c: the character provided
 * @args: variable list of params
 *
 * Return: an int which tells if a type was printed
 */
int print_arg(char c, va_list args)
{
	char *str;
	int str_check = 0, check = 0;

	switch (c)
	{
		case 'c':
			printf("%c", va_arg(args, int));
			check = 1;
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			check = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			check = 1;
			break;
		case 's':
			str = va_arg(args, char *);
			if (str)
				str_check = 1;
			switch (str_check)
			{
				case 1:
					printf("%s", str);
					check = 1;
					break;
				default:
					printf("(nil)");
					check = 1;
					break;
			}
	}
	return (check);
}
/**
 * print_all - Print every argument passed regardless of type
 * @format: format of the passed parameters
 * @...: the passed parameters
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, str_len = _str_len(format), checked;
	va_list args;

	va_start(args, format);
	while (i < str_len)
	{
		checked = print_arg(format[i], args);
		if (i != str_len - 1 && checked)
		{
			printf(", ");
			checked = 0;
		}
		i++;
	}
	printf("\n");
}
