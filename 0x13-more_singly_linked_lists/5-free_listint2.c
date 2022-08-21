#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer to head node
 * Return: void
 * Copyright © 2022 baccrie
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL || head == NULL)
	{
		return;
	}
	while ((*head)->next != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	free (*head);
	*head = NULL;
}
