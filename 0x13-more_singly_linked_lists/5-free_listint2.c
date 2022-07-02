#include "stdio.h"
#include "stdlib.h"
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer to head node
 * Return: nothing
 * Copyright © 2022 baccrie
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	if (head == NULL)
	{
		return;
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	*head = NULL;

}
