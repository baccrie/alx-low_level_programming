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

	tmp = (*head)->next;
	if (*head == NULL || head == NULL)
		return (0);
	value = (*head)->n;
	free(*head);
	*head = tmp;

	return (value);
}
