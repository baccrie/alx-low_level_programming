#include "lists.h"

/**
 * print_listint - prints the data of each node
 * @h: pointer to list head
 * Return: no of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
