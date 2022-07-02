#include "stdio.h"
#include "lists"
#include "stdlib.h"
#include "string.h"

/**
 * add_node - add nodes to list
 * @head: a double pointer pointing to a list head
 * @str: node data
 * Return: pointer to list head
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return;
	strdup(tmp->str, str);
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
