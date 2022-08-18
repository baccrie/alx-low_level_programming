#include "stdlib.h"
#include "lists.h"
#include "string.h"

/**
 * add_node - adds nodes to begenning of list
 * @str: pointer to str
 * @head: double pointer to head
 * Return: head
 * Copyright © 2022 baccrie
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->len = strlen(str);
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
