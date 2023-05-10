#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_list - Implements jump search algorithm on a linked list
 * @list: the head of the linked list
 * @size: the number of nodes in the list
 * @value: the value to search for
 *
 * Return: the node containing the value, NULL otherwise
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *left = list, *right = list, *node;
	size_t jump = sqrt(size), i;

	if (list == NULL)
		return (NULL);
	while (1)
	{
		for (i = 0; i < jump; i++)
		{
			if (right->next == NULL)
				break;
			right = right->next;
			if (right->next == NULL)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n",
				right->index, right->n);
		if (right->n > value || right->next == NULL)
			break;
		left = right;
	}
	node = left;
	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, right->index);
	while (node != right->next)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}
	return (NULL);
}
