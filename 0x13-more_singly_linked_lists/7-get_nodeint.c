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

/**
 * get_nodeint_at_index - A function
 * @head: A double pointer to head
 * @index: position nth
 * Return: tmp or NULL
 * Copyright © 2022 baccrie
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t total, i;
	listint_t *tmp;

	i = 0;
	tmp = head;
	total = listint_len(head);
	if (index > total || head == NULL)
		return (0);
	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp);
}
