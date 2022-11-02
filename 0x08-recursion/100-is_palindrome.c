#include "main.h"
/**
 * _strlen - length of a string
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strlen(s + 1));
}
/**
 * palindrome - Find palindrome
 * @len: length of string
 * @s: string
 * @i: index
 *
 * Return: 1(palindrome) 0(not a palindome)
 */
int palindrome(int i, int len, char *s)
{
	if (len <= 1)
		return (1);
	else if (len - i < i)
		return (1);
	else if (s[i] != s[len - i])
		return (0);
	else
		return (palindrome(i + 1, len, s));
}
/**
 * is_palindrome - check if string is a palindrome
 * @s: string
 *
 * Return: 1(palindrome) 0(is not)
 */
int is_palindrome(char *s)
{
	int len, i = 0;

	len = _strlen(s) - 1;

	return (palindrome(i, len, s));
}
