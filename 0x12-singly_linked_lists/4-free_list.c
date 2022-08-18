#include "lists.h"
#include "string.h"
#include "stdlib.h"

/**
 * free_list - frees list
 * @head: head node
 * Return: head node
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
