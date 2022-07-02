#include "stdio.h"
#include "lists.h"
#include "stdlib.h"
#include "string.h"

/**
 * add_node_end - add nodes to list
 * @head: a double pointer pointing to a list head
 * @str: node data
 * Return: pointer to list head
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *move;

	move = *head;
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	if (*head == NULL)
		return (*head):
	tmp->str = strdup(str);
	tmp->len = strlen(str);
	while (move->next != NULL)
	{
		move = move->next;
	}
	tmp->next = NULL;
	move->next = tmp;

	return (*head);
}
