#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Print all the elements of a list
 * @h: the list with nodes to be printed
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	int length = 0;

	if (h == NULL)
		return (length);
	for (current = h; current != NULL; current = current->next)
	{
		printf("%i\n", current->n);
		length++;
	}
	return (length);
}
