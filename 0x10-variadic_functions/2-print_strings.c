#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - Print strings passed to the function
 * @separator: string that separates strings passed to func
 * @n: the number of strings
 * @...: the strings to be passed
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;
	char *replacement = "(nil)";

	va_start(args, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("%s", replacement);
			if (i != n - 1)
			{
				if (separator != NULL)
					printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
