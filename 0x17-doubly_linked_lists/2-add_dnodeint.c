#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n) {
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	new->n = n;

	if (new == NULL) {
		return (NULL);
	}
	new->next = NULL;
	if(*head == NULL) {
		new->prev = NULL;
		(*head) = new;
		return (new);
	}

	new->next = (*head);
	new->prev = NULL;
	(*head) = new;
	return (new);
}
