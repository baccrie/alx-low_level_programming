#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int i;
	dlistint_t *ptr;

	ptr = head;
	i = 0;
	if (head == NULL) {
		return (0);
	}
	while (ptr != NULL) {
		i += ptr->n;
		ptr = ptr->next;
	}

	return (i);
}
