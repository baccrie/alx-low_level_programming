#include "stdio.h"
#include "stdlib.h"
#include "lists.h"

/**
 * add_nodeint - add node to begginning of list
 * @head: double pointer to head node
 * @n: node data
 * Return: pointer to list head
 * Copyright © 2022 baccrie
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}

