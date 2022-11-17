#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - Sum up all the parameters passed
 * @n: the number of params to be passed
 * @...: ellipsis for the variable elems to be passed
 *
 * Return: sum, 0 for fail
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, int);
	return (sum);
}
