#include "stdio.h"
#include "stdlib.h"
#include "lists.h"

/**
 * add_nodeint_end - function that adds node to end of list
 * @n: node data
 * @head: double pointer to head node of list
 * Return: pointer or null
 * Copyright © 2022 baccrie
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *end;

	tmp = malloc(sizeof(listint_t));
	end = *head;
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = tmp;
	tmp->next = NULL;

	return (tmp);
}
