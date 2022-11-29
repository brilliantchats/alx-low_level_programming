#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - free a list passed a parameter
 * @head: the first node of the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	free(temp);
	free(current);
}
