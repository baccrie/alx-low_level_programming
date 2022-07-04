#include "stdio.h"
#include "lists.h"
#include "stdlib.h"

/**
 * delete_nodeint_at_index - a function that delete node
 * @head: double pointer
 * @index: node to delete
 * Return: 0 or 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *ptr;
	unsigned int size, i;

	size = 0;
	i = 0;
	tmp = *head;
	while (tmp != NULL)
	{
		size++;
		tmp = tmp->next;
	}
	if (index > size)
		return (-1);
	if (index == 0 && *head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	if (size < 1 || *head == NULL)
		return (-1);
	tmp = *head;
	while (i < (index - 1))
	{
		tmp = tmp->next;
		i++;
	}
	ptr = tmp->next;
	tmp->next = ptr->next;
	free(tmp);
	return (1);
}
