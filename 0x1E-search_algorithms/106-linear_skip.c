#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_skip - Implement linear search in a skip list
 * @list: the head of the skip list
 * @value: the value to search for
 *
 * Return: a pointer to the node with the value, null otherwise
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list->express, *left = list;

	if (list == NULL)
		return (NULL);
	while (node)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				node->index, node->n);
		if (node->n < value)
		{
			left = node;
			if (node->express)
				node = node->express;
			else
			{
				while (node->next)
					node = node->next;
				break;
			}
		}
		else if (node->n > value)
			break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			left->index, node->index);
	while (left != node)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				left->index, left->n);
		if (left->n == value)
			return (left);
		left = left->next;
	}
	return (NULL);
}
