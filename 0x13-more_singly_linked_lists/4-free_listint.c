#include "stdio.h"
#include "stdlib.h"
#include "lists.h"


/**
 * free_listint - frees all node
 * @head: double pointer to node head
 * Return: double pointer
 * Copyright © 2022 baccrie
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	if (head == NULL)
		return;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}

	free(head);
}
