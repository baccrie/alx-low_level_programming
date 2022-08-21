#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: pointer
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	if (head == NULL || *head == NULL)
		return (NULL);
	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		*head = next;
	}
	(*head)->next = prev;
	return (*head);
}
