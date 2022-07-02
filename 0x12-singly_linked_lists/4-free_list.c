#include "stdio.h"
#include "stdlib.h"
#include "lists.h"


/**
 * free_list - a function that frees list
 * @head: pointer to first node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	if (head == NULL)
		return;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head->str);
	free(head);
}
