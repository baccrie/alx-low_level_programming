#include <stdio.h>
#include <stdlib.h>
#include <lists.h>

/**
 * free_list - a function that frees list
 * @head: a head pointer to first node
 * Return: void
 * Copyright © baccrie 2022
 */

void free_list(list_t *head)
{
	list_t *tmp, *tmp1;
	tmp = head;

	if (head == NULL)
		return (void);
	while (tmp->next != NULL)
	{
		tmp1 = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = tmp1;
	}

	return (void);
}
