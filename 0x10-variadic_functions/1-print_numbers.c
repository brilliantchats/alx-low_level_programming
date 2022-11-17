#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - Print paramaters passed as variadic
 * @separator: how to separate the numbers when they are printed
 * @n: the number of parameters
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i != n - 1)
			{
				if (separator != NULL)
					printf("%s", separator);
			}
		}
		printf("\n");
	}
	va_end(args);
}
