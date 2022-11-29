#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - Free a list and set head to NULL
 * @head: the first element of the list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *temp;

	if (*head != NULL)
	{
		while (current != NULL)
		{
			temp = current->next;
			free(current);
			current = temp;
		}
		*head = NULL;
	}
}
