#include "stdio.h"
#include "lists.h"
#include "stdlib.h"


/**
 * insert_nodeint_at_index - add node at index
 * @head: head of node
 * @n: node data
 * @idx: index to add node
 * Return: NULL or pointer
 * Copyright © baccrie #Doing the hard things ALX 22
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *tmp;
	unsigned int size, i;

	ptr = *head;
	size = i = 0;
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	if (*head == NULL || idx == 0)
	{
		tmp->next = (*head)->next;
		*head = tmp;
		return (*head);
	}
	while (ptr != NULL)
	{
		ptr = ptr->next;
		size++;
	}
	if (idx > size)
		return (NULL);
	ptr = *head;
	while (i < (idx - 1))
	{
		ptr = ptr->next;
		i++;
	}

	tmp->next = ptr->next;
	ptr->next = tmp;

	return (*head);
}
