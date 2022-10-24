#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;
	const dlistint_t *ptr;

	nodes = 0;
	ptr = h;
	if (ptr == NULL)
		return (nodes);
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		nodes += 1;
		ptr = ptr->next;
	}

	return (nodes);
}
