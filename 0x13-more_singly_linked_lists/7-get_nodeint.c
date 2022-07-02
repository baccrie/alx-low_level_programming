#include "stdio.h"
#include "lists.h"

/**
 * listint_len - ccount nodes
 * @h: list head
 * Return: no of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t size;
	const listint_t *tmp;

	tmp = h;
	size = 0;
	while (tmp != NULL)
	{
		size++;
		tmp = tmp->next;
	}
	return (size);
}


/**
 * get_nodeint_at_index - get
 * @head: ori
 * @index: melo melo
 * Return: da pointer paada
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	size_t no;
	listint_t *tmp;

	i = 0;
	no = listint_len(head);
	tmp = head;

	if (head == NULL)
		return (NULL);
	if (index < 0)
		return (NULL);
	if (index > (no + 1))
		return (NULL);
	while (i < index)
	{
		i++;
		tmp = tmp->next;
	}

	return (tmp);
}
