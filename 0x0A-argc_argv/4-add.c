#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_str - Check a str for int
 * @s: the string
 *
 * Return: 1(Success) 0(Fail)
 */
int check_str(char *s)
{
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}
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
			if (!check_str(argv[i]))
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
