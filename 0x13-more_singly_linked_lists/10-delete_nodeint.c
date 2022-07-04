#include "stdio.h"
#include "lists.h"

/**
 * delete_nodeint_at_index - a function that delete node
 * @head: double pointer
 * @index: node to delete
 * Return: 0 or 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmpb;

	tmp = *head;
	i = 0;

	while (i < (index - 1))
	{
		tmp = tmp->next;


