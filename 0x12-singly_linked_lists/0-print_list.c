#include "stdio.h"
#include "lists.h"
/**
 * print_list - prints the data of each node
 * @h: pointer to list head
 * Return: no of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t size;
	list_t *tmp;

	size = 1;
	tmp = h;
	while (tmp->next != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", tmp->len, tmp->str);
		putchar('\n');
		size++;
		tmp = tmp->next;
	}

	return (size);
}
