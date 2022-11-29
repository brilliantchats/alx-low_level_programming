#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert a node at given index
 * @head: the first node of the list
 * @idx: the index where to put the new node
 * @n: integer value of the new node
 *
 * Return: the address of the new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *previous;
	listint_t *new;
	unsigned int index = 0;

	if (*head == NULL)
		return (NULL);
	if (index == idx)
	{
		new = malloc(sizeof(*head));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	previous = *head;
	current = previous->next;
	index++;
	while (current != NULL)
	{
		if (index == idx)
		{
			new = malloc(sizeof(current));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = current;
			previous->next = new;
			return (new);
		}
		previous = current;
		current = current->next;
		index++;
	}
	return (NULL);
}
