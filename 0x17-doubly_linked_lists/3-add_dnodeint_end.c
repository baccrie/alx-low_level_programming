#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n) {
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
