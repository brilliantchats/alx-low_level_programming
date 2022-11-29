#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - Return the number of nodes in a list
 * @h: the list
 *
 * Return: the length of the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t current;
	int length = 0;

	if (h == NULL)
		return (length);
	for (current = h; current != NULL; current = current->next)
	{
		length++;
	}
	return (length);
}
