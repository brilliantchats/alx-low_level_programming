#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - Remove the first node of a list
 * @head: the first node of the list
 *
 * Return: the integer value of the node, 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	listint_t *temp = *head;
	int i;

	if (*head == NULL)
		return (0);
	current = temp->next;
	i = temp->n;
	free(temp);
	*head = current;
	return (i);
}
