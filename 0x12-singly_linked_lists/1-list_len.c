#include "stdio.h"
#include "lists.h"

/**
 * list_len - function that counts nodes
 * @h: pointer to first node
 * Return: no of nodes
 */

size_t list_len(const list_t *h)
{
	size_t size;
	const list_t *tmp;

	tmp = h;
	size = 0;
	while (tmp != NULL)
	{
		size++;
		tmp = tmp->next;
	}

	return (size);
}
