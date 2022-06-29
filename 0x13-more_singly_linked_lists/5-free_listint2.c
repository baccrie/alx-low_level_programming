#include "lists.h"

/**
 * free_listint2 - frees a list using double p
 * @head: double pointer to head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	if (head != NULL)
	{
		while (tmp->next != NULL)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
		free(*head);
	}
	*head = NULL;
}
