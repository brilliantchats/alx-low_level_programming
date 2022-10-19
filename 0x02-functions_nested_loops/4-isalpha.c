#include "main.h"

/**
 * _isalpha - Check whether a character is of the alphabet
 * @c: Character to be checked
 *
 * Description: Is a paramter passed an alphabet character
 *
 * Return: 1(Success), 0(Fail)
 *
 */
int _isalpha(int c)
{
	int i, j;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	for (j = 97; j <= 122; j++)
	{
		if ( c == j)
		{
			return (1);
		}
	}
	return (0);
}
