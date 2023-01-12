#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - Print elems of a doubly linked list
 * @h: the first element of the doubly linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int len = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		len++;
	}
	return (len);
}
