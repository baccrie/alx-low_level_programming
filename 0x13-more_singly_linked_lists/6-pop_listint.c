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
	int num;
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return (0);
	num = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (num);
}
	
