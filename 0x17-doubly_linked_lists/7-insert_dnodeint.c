#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *ptr1;
	size_t i;

	i = 0;
	ptr1 = *h;
	ptr = malloc(sizeof(dlistint_t));
	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;
	if (ptr == NULL)
		return (NULL);
	if (*h == NULL || h == NULL)
		return NULL;
	if (idx == 0) {
		ptr->next = (*h)->next;
		ptr->prev = NULL;
		*h = ptr;
		return (*h);
	}
	while (i < (idx - 1)) {
		ptr1 = ptr1->next;
		i++;
	}
	ptr->next = ptr1->next;
	ptr1->next = ptr;
	ptr->prev = ptr1;
	return (*h);
}
