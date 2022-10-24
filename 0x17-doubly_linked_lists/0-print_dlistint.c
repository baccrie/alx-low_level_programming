#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h) {
	const dlistint_t *ptr;
	size_t nodes;

	ptr = h;
	nodes = 0;
	if (h == NULL) {
		return (nodes);
	}
	while (ptr != NULL) {
		nodes += 1;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (nodes);
}
