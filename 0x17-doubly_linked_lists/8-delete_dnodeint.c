#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Deletes the node at given index
 * @head: the first element of the list
 * @index: the index of the element to delete
 *
 * Return: 1 on success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *previous = NULL, *up_next;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (index == i)
		{
			if (previous == NULL && current->next == NULL)
				*head = NULL;
			else if (previous == NULL)
			{
				up_next = current->next;
				up_next->prev = NULL;
				current->next = NULL;
				*head = up_next;
			}
			else if (current->next == NULL)
			{
				previous->next = NULL;
				current->prev = NULL;
			}
			else
			{
				up_next = current->next;
				up_next->prev = previous;
				previous->next = up_next;
				current->prev = NULL;
				current->next = NULL;
			}
			free(current);
			return (1);
		}
		previous = current;
		current = current->next;
		i++;
	}
	return (-1);
}
