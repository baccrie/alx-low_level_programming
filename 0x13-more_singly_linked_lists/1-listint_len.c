#include "stdio.h"
#include "lists.h"

/**
 * listint_len - ccount nodes
 * @h: list head
 * Return: no of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t size;
	const listint_t *tmp;

	tmp = h;
	size = 0;
	while (tmp != NULL)
	{
		size++;
		tmp = tmp->next;
	}

	return (size);
}
