#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Perfoms a simple operation depending on type of func
 * @argc: total number of arguments passed
 * @argv: array containing arguments
 *
 * Return: 0 success, anything else fail
 */
int main(int argc, char *argv[])
{
	int result;
	
	char *op = argv[2];
	char *add = "+";
	char *sub = "-";
	char *mul = "*";
	char *div = "/";
	char *mod = "%";

	if (argc != 4)
	{
		printf("Error1\n");
		exit(98);
	}
	if (op != add && op != sub && op != mul && op != div && op != mod)
	{
		printf("Error2\n");
		exit(99);
	}
	if ((op == div || op == mod) && atoi(argv[3]) == 0)
	{
		printf("Error3\n");
		exit(100);
	}
	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
