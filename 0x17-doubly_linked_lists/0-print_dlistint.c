#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h) {
	int nodes;

	nodes = 0;
	if (h == NULL) {
		return (nodes);
	}
	while (h != NULL) {
		nodes += 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
