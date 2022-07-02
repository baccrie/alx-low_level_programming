#include "stdio.h"
#include "lists.h"

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
	if (++index > no)
		return (NULL);
	while (i <= index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp);
}
