#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * divide - divide given number till you get coins
 * @n: number
 *
 * Return: the number of coins
 */
int divide(int n)
{
	int count, condition;

	count = 0;
	condition = 1;
	while (condition)
	{
		if (n >= 25)
		{
			count = count + 1;
			n = n - 25;
		}
		else if (n >= 10)
		{
			count = count + 1;
			n = n - 10;
		}
		else if (n >= 5)
		{
			count = count + 1;
			n = n - 5;
		}
		else if (n >= 2)
		{
			count = count + 1;
			n = n - 2;
		}
		else if (n == 1)
		{
			count = count + 1;
			n = n - 1;
		}
		else
			return (count);
	}
}
/**
 * main - Entry Point
 * @argc: argument counter
 * @argv: array of arguments
 *
 * Return: 0(Success) 1(Fail)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[1][i] == "-")
		printf("0\n");
	else
	{
		printf("%d\n", divide(atoi(argv[1])));
	}
	return (0);
}
