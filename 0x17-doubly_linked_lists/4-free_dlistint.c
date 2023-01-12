#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - Free a doubly linked list
 * @head: the first element of the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *previous;

	if (head != NULL)
	{
		while (current != NULL)
		{
			previous = current;
			current = current->next;
			free(previous);
		}
	}
}
