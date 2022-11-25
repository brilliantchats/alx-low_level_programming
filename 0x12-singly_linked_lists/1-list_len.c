#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Returns the number of nodes in a list
 * @h: the first node in the list
 *
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *current;
	int length = 0;

	if (h == NULL)
		return (0);
	current = h;
	while (current != NULL)
	{
		length++;
		current = current->next;
	}
	return (length);
}
