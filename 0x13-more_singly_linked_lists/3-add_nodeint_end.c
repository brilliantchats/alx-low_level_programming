#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - Add a node at the end of a list
 * @head: the first node of the list
 * @n: the integer value of the new node to be added
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *current;

	if (*head == NULL)
	{
		last = malloc(sizeof(listint_t));
		last->n = n;
		last->next = NULL;
		*head = last;
		return (last);
	}
	last = malloc(sizeof(*head));
	if (last == NULL)
		return (NULL);
	current = *head;
	while (current != NULL)
	{
		if (current->next == NULL)
		{
			last->n = n;
			last->next = NULL;
			current->next = last;
			break;
		}
		current = current->next;
	}
	return (last);
}
