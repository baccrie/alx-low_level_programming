#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) {
	size_t i;
	dlistint_t *ptr;

	ptr = head;
	i = 0;
	if (head == NULL) {
		return (NULL);
	}
	while (i < index) {
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
