#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - Gets the function to use depending on operator
 * @s: the string containing the operator
 *
 * Return: pointer to the function to use, null if no match
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 6)
	{
		if (ops[i].op == s && ops[i].op != NULL)
			return (ops[i].f);
	}
	return (NULL);
}
