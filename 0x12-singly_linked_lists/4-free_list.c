#include "lists.h"
#include "string.h"
#include "stdlib.h"
#include "stdio.h"
/**
 * free_list - frees list
 * @head: head node
 * Return: head node
 */

void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = tmp->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
