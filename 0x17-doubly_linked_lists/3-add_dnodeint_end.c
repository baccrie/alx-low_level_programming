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
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new;

	new = malloc(sizeof(dlistint_t));
	ptr = *head;
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (new == NULL)
		return (NULL);
	if (ptr == NULL) {
		*head = new;
		return (*head);
	}

	while (ptr->next != NULL) {
		ptr = ptr->next;
	}
	ptr->next = new;
	new->prev = ptr;
	return (*head);
}
