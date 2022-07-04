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

	size = 0;
	i = 0;
	tmp = head;
	/**
	while (tmp != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (head);
	*/
	while (tmp != NULL)
	{
		size++;
		tmp = tmp->next;
	}
	if (index > size)
		return (NULL);
	tmp = head;
	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp);
}
