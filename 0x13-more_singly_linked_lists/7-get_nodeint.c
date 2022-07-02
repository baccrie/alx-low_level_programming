#include "stdio.h"
#include "lists.h"

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

	tmp = head;
	i = 0;
	if (head == NULL)
		return (NULL);
	no = listint_len(head);
	if ((index + 1) > no)
		return (NULL);
	while (i <= index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp);
}
