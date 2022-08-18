#include "stdio.h"
#include "lists.h"

/**
 * list_len - Returns the no of elements
 * @h: head of linked list
 * Return: number of nodes
 * Copyright © 2022 baccrie
 */

size_t list_len(const list_t *h)
{
	size_t no;
	const list_t *ptr;

	no = 0;
	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		no++;
	}
	return (no);
}
