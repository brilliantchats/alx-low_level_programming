#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Add arguments
 * @argc: argument counter
 * @argv: array of arguments
 *
 * Return: 0(Success) 1(Error)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i]) && atoi(argv[i]) <= 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
