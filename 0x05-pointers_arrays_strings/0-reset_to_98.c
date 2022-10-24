#include "main.h"

/**
 * reset_to_98 - Update a variable value via a pointer passed to function
 * @n: pointer passed to function
 *
 * Description: Function to change a variable value via pointer passed as param
 *
 * Return: void (Success)
 *
 */
void reset_to_98(int *n)
{
	*n = 98;
}
