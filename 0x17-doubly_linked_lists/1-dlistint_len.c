#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - Returns the length of the list
 * @h: the first element of the list
 *
 * Return: the length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int len = 0;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
