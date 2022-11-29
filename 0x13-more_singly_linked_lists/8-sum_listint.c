#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - Returns the sum of integer values of nodes
 * @head: the first node of the list
 *
 * Return: sum, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
