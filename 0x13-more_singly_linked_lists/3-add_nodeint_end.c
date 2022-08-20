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
	listint_t *ptr, *tmp;

	tmp = *head;
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	while (tmp != NULL)
	{
		tmp = tmp->next;
	}
	ptr->next = NULL;
	tmp->next = ptr;
	return (ptr);
}
