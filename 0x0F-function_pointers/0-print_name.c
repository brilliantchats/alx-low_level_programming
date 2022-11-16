#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - Prints a string using a function passed
 * @name: the string
 * @f: the function passed to print out the string
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
