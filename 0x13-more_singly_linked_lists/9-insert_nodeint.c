#include "stdio.h"
#include "lists.h"


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
	listint_t *tmp, *ptr;
	unsigned int size, i;

	size = 0;
	i = 0;
	tmp = malloc(sizeof(listint_t));
	ptr = *head;
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		size++;
	}
	ptr = *head;
	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}
	if (idx > size || idx < 0)
	{
		return (NULL);
	}

	while (i < (idx - 1))
	{
		ptr = ptr->next;
		i++;
	}
	tmp->next = ptr->next;
	ptr->next = tmp;

	return (tmp);
}
