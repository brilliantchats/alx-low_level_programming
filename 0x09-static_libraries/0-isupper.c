#include "main.h"

/**
 * _isupper - Check for uppercase letters
 * @c: character to be checked
 *
 * Description: Check if a given character is uppercase
 *
 * Return: 1(c is uppercase) 0(c is not)
 *
 */
int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
