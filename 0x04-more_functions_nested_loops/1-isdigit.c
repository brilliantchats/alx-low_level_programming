#include "main.h"

/**
 * _isdigit - Check for a digit
 * @c: character to be checked
 *
 * Description: Check whether a given character is a digit
 *
 * Return: 1(is a digit), 0(is not)
 *
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
