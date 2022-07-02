#include "stdio.h"
#include "lists.h"

/**
 * print_listint - prints the data of each node
 * @h: pointer to list head
 * Return: no of nodes in list
 */

size_t print_listint(const list_t *h)
{
	size_t size;
	const list_t *tmp;

	size = 0;
	tmp = h;
	while (tmp != NULL)
	{
		printf("%d", tmp->n);
		putchar('\n');
		size++;
		tmp = tmp->next;
	}

        return (size);
}
