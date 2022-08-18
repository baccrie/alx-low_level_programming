#include "stdlib.h"
#include "lists.h"
#include "string.h"

/**
 * add_node_end - adds nodes to begenning of list
 * @str: pointer to str
 * @head: double pointer to head
 * Return: head
 * Copyright © 2022 baccrie
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *ptr1;

	ptr1 = *head;
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->len = strlen(str);
	ptr->str = strdup(str);
	if (*head == NULL)
	{
		ptr->next = NULL;
		*head = ptr;
		return (*head);
	}
	while (ptr1->next != NULL)
		ptr1 = ptr1->next;
	ptr->next = NULL;
	ptr1->next = ptr;
	return (*head);
}
