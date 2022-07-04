#include "stdio.h"
#include "lists.h"

/**
 * get_nodeint_at_index - A function
 * @head: A double pointer to head
 * @index: position nth
 * Return: tmp or NULL
 * Copyright © 2022 baccrie
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i, size;

	tmp = head;
	i = 0;
	size = 0;
	while (tmp->next != NULL)
	{
		size++;
		tmp = tmp->next;
	}
	tmp = head;
	if ((index > size) || (index < 0))
		return (NULL);
	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp);
}	
