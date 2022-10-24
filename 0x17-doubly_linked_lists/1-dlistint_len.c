#include "lists.h"

/**
 * dlistint_len - returns the no of elements in a list
 * @h: head of the list
 * Return: the number of nodes
 * copyright baccrie © 2022
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;
	const dlistint_t *ptr;

	nodes = 0;
	ptr = h;
	if (ptr == NULL)
		return (nodes);
	while (ptr != NULL)
	{
		nodes += 1;
		ptr = ptr->next;
	}

	return (nodes);
}
