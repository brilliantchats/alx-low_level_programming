#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - Print a linked list given as a parameter
 * @h: the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	list_t *current;
	int length = 0;

	if (h == NULL)
		return (0);

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	length++;
	current = h->next;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		length++;
		current = current->next;
	}
	return (length);
}
