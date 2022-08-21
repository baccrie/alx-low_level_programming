#include "stdio.h"
#include "lists.h"
#include "stdlib.h"


/**
 * insert_nodeint_at_index - add node at index
 * @head: head of node
 * @n: node data
 * @idx: index to add node
 * Return: NULL or pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *prev;
	size_t i;

	i = 0;
	prev = *head;
	if (head == NULL || *head == NULL)
		return (NULL);

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	while (i < (idx - 1) & prev->next != NULL)
	{
		prev = (prev)->next;
		i++;
	}

	tmp->next = prev->next;
	prev->next = tmp;
	return (*head);
}
