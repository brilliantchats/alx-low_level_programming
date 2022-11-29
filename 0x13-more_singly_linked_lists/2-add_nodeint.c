#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a node to the beginning of a list
 * @head: the first node of the list
 * @n: the integer value of the node to be added
 *
 * Return: the address of the new element, NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(*head));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = *head;
	*head = current;
	return (current);
}
