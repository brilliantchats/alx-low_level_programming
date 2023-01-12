#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: the first element of the list
 * @n: integer value of the new node
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	while (1)
	{
		if (current->next == NULL)
		{
			new->prev = current;
			current->next = new;
			new->next = NULL;
			break;
		}
		current = current->next;
	}
	return (new);
}
