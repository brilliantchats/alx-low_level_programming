#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Insert a node at a given index
 * @h: the first element of the list
 * @idx: the index to insert the node
 * @n: the integer value of the new node to be inserted
 *
 * Return: address of the new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *previous = NULL, *new;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (idx == i)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			if (idx == 0)
			{
				new->n = n;
				new->prev = previous;
				new->next = current;
				current->prev = new;
				*h = new;
				return (new);
			}
			if (current->next == NULL)
			{
				new = add_dnodeint_end(&current, n);
				return (new);
			}
			new->n = n;
			new->prev = previous;
			new->next = current;
			previous->next = new;
			current->prev = new;
			return (new);
		}
		previous = current;
		current = current->next;
		i++;
	}
	return (NULL);
}
