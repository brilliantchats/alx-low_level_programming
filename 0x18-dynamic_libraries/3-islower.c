#include "main.h"

/**
 * _islower - Entry Point
 * @c: c is lowercase?
 *
 * Description: Check whether input is a lowercase
 *
 * Return: 1(Success), 0(Fail)
 *
 */
int _islower(int c)
{
	int j;

	for (j = 97; j <= 122; j++)
	{
		if (c == j)
		{
			return (1);
		}
	}
	return (0);
}
