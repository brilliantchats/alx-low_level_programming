#include "main.h"

/**
 * set_string - set a value of a pointer to a char
 * @s: the string to change
 * @to: source string
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
