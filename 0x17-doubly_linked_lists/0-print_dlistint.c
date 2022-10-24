#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h) {
	dlistint_t *ptr;
	size_t nodes;

	ptr = h;
	nodes = 0;
	while (ptr != NULL) {
		nodes += 1;
		ptr = ptr->next;
	}

	return (nodes);
}
