#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - Gets the function to use depending on operator
 * @s: the string containing the operator
 *
 * Return: pointer to the function to use, null if no match
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (i < 6)
	{
		if (!strcmp(ops[i].op, s) && s != NULL)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
