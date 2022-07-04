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
	if (*head == NULL)
	{
		*head = NULL;
		return;
	}
	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
		free(tmp);
		tmp = *(head);
	}
	free(tmp);
	*head = NULL;

}
