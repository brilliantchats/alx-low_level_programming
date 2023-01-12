#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - adds new node at the beginning of a dlistint_t list
 * @head: first elem of the list
 * @n: the integer value of the new node
 *
 * Return: address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (current != NULL)
		current->prev = new;
	new->prev = NULL;
	new->next = current;
	*head = new;
	return (new);
}
