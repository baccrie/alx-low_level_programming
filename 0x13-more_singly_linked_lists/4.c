#include "stdio.h"
#include "stdlib.h"
#include "lists.h"

/**
 * free_listint - function that adds node to end of list
 * @head: pointer to head node of list
 * Return: pointer or null
 * Copyright © 2022 baccrie
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head->next;
		free(&head->n);
		head = temp;
	}

	free(head);
}
