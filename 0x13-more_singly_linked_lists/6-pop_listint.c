#include "stdio.h"
#include "lists.h"

/**
 * pop_listint - A Func
 * @head: double pointer
 * Return: int
 * Copyright © 2022 baccrie
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *tmp;

	tmp = (*head);
	if (*head == NULL)
		return (0);
	value = (*head)->n;
	*head = (*head)->next;
	free(tmp)
	return (value);
}
