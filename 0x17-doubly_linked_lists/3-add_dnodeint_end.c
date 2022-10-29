#include "lists.h"

/**
 *  add_dnodeint_end - new node at the beginning of a dlistint_t list.
 * @head: head
 * @n : new data
 * Return: the number of elements in a linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	tmp = *head;
	if (new == NULL) {
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	if (tmp == NULL) {
		new->prev = NULL;
		(*head) = new;
		return (*head);
	}
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = new;
	new->prev = tmp;
	return (*head);
}
