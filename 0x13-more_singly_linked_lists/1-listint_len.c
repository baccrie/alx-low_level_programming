#include "stdio.h"
#include "lists.h"

/**
 * listint_len - ccount nodes
 * @h: list head
 * Return: no of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int num;

	num = 0;
	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}

