#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - Returns node at index position
 * @head: the first element of the list
 * @index: the index of the node to be searched for
 *
 * Return: the node at index, NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (index == i)
			return current;
		current = current->next;
		i++;
	}
	return (NULL);
}
