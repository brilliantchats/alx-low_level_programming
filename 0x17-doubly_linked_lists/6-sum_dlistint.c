#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - Returns the sum of all nodes' n members
 * @head: the first element of the list
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
