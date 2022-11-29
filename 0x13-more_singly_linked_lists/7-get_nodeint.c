#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - Returns node at nth index
 * @head: first node of the list
 * @index: index of the node to return
 *
 * Return: node at the index, NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i = i + 1;
	}
	return (NULL);
}
